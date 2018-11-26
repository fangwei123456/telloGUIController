#include "udpserver.h"
#include "tellodata.h"
#include <QThread>

udpServer::udpServer(QObject *parent) : QObject(parent)
{
    className = "[udpServer]";
    receivedDataSize = 1;
    receivedData = new char[receivedDataSize];
    udpSocket = new QUdpSocket(this);
}

bool udpServer::setUdpServer(const QString ip, const quint16 port, const QString fileName)
{
    if(ip=="localhost")
        listenedIP = QHostAddress::LocalHost;
    else
        listenedIP = QHostAddress(ip);
    listenedPort = port;

    if(!fileName.isEmpty())
    {
        fileWriter.setFileName(fileName);
        fileWriter.open(QIODevice::WriteOnly | QIODevice::Truncate);

    }
    printLog(className,listenedIP.toString()+":"
             +QString::number(listenedPort)+" "+fileName);

    if(udpSocket->state()==QAbstractSocket::UnconnectedState && !udpSocket->bind(listenedIP,listenedPort))
    {
        printLog(className,"[error]failed to bind");
        return false;
    }

    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(readMesg()));
    return true;
}



void udpServer::readMesg()
{
    while(udpSocket->hasPendingDatagrams())
    {
        newDataSize = udpSocket->pendingDatagramSize();
        while(newDataSize>=receivedDataSize)
        {
            receivedDataSize = receivedDataSize * 2;
            delete[] receivedData;
            receivedData = new char[receivedDataSize];
            printLog(className,"receivedDataSize appends to "+QString::number(receivedDataSize));
        }
        udpSocket->readDatagram(receivedData,newDataSize);

        emit(newMesgGot(receivedData,newDataSize));

        if(fileWriter.isOpen())
        {
            fileWriter.write(receivedData,newDataSize);
        }
        else
        {
            printLog(className,"[read]"+QString(receivedData));
        }

    }

}

void udpServer::rename(const QString newName)
{
    className = newName;
}

