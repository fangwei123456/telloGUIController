#include "udpclient.h"
#include "tellodata.h"
#include <QThread>
udpClient::udpClient(QObject *parent) : QObject(parent)
{
    className = "[udpClient]";
    udpSocket = new QUdpSocket(this);
    receivedDataSize = 1;
    receivedData = new char[receivedDataSize];
}

void udpClient::setIPandPort(const QString ip, const quint16 port)
{
    if(ip=="localhost")
        serverIP = QHostAddress::LocalHost;
    else
        serverIP = QHostAddress(ip);
    serverPort = port;

    printLog(className,serverIP.toString()+":"
             +QString::number(serverPort));
    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(readMesg()));
}

void udpClient::sendMesg(const QString mesg)
{
    udpSocket->writeDatagram(mesg.toUtf8(),serverIP,serverPort);
    printLog(className,"[send]"+mesg);
}

void udpClient::sendMesg0()
{
    QString mesg = "command";
    udpSocket->writeDatagram(mesg.toUtf8(),serverIP,serverPort);
    printLog(className,"[send]"+mesg);

}

void udpClient::rename(const QString newName)
{
    className = newName;
}

bool udpClient::setUdpServer(const QString ip, const quint16 port, const QString fileName, const bool updateTelloStateF)
{
    updateTelloFlag = updateTelloStateF;
    if(ip=="localhost")
        listenedIP = QHostAddress::LocalHost;
    else
        listenedIP = QHostAddress(ip);
    listenedPort = port;

    if(!fileName.isEmpty())
    {
        fileWriter.setFileName(fileName);
        fileWriter.open(QIODevice::WriteOnly | QIODevice::Truncate);
        printLog(className,listenedIP.toString()+":"
                 +QString::number(listenedPort)+" "+fileName);
    }
    else
        printLog(className,listenedIP.toString()+":"
             +QString::number(listenedPort));

    if(udpSocket->state()==QAbstractSocket::UnconnectedState && !udpSocket->bind(listenedIP,listenedPort))
    {
        printLog(className,"[error]failed to bind");
        return false;
    }

    connect(udpSocket,SIGNAL(readyRead()),this,SLOT(readMesg()));
    return true;
}

void udpClient::readMesg()
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

        //emit(newMesgGot(receivedData,newDataSize));

        if(fileWriter.isOpen())
        {
            fileWriter.write(receivedData,newDataSize);
        }
        else
        {
            printLog(className,"[read]"+QString(receivedData));
        }
        if(updateTelloFlag)
        {
            updateTelloState();
        }

    }

}


void udpClient::updateTelloState()
{
    qDebug()<<receivedData;
    //sscanf(receivedData,":%d;:%d;:%d;:%d;:%d;:%d;:%d;:%d;:%d;:%d;:%d;:%f;:%d;:%f;:%f;:%f;",
    qDebug()<<sscanf(receivedData,"pitch:%d;roll:%d;yaw:%d;vgx:%d;vgy:%d;vgz:%d;templ:%d;temph:%d;tof:%d;h:%d;bat:%d;baro:%f;time:%d;agx:%f;agy:%f;agz:%f;\r\n",
           &tello_pitch,&tello_roll,&tello_yaw,
           &tello_vgx,&tello_vgy,tello_vgz,
           &tello_templ,&tello_temph,
           &tello_tof,&tello_h,&tello_bat,
           &tello_baro,&tello_time,
           &tello_agx,&tello_agy,&tello_agz);
    printf("pitch:%d;roll:%d;yaw:%d;vgx:%d;vgy:%d;vgz:%d;templ:%d;temph:%d;tof:%d;h:%d;bat:%d;baro:%f;time:%d;agx:%f;agy:%f;agz:%f;\n",
           tello_pitch,tello_roll,tello_yaw,
           tello_vgx,tello_vgy,tello_vgz,
           tello_templ,tello_temph,
           tello_tof,tello_h,tello_bat,
           tello_baro,tello_time,
           tello_agx,tello_agy,tello_agz);
    fflush(stdout);
}


