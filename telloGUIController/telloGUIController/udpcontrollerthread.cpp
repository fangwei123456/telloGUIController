#include "udpcontrollerthread.h"
#include <QDateTime>

udpControllerThread::udpControllerThread(QThread *parent) : QThread(parent)
{
    udpSocket = NULL;
    udpServer = NULL;
}

bool udpControllerThread::connectToTello(const QString telloIP, const quint16 controlPort)
{
    if(telloIP=="localhost")
        serverIP = QHostAddress::LocalHost;
    else
        serverIP = QHostAddress(telloIP);
    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread]"<<serverIP;
    serverPort = controlPort;
    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread]"<<controlPort;
    start();
    msleep(600);
    return isRunning();
}

void udpControllerThread::run()
{

    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread]try to start the udpControllerThread";
    if(udpSocket==NULL)
        udpSocket = new QUdpSocket();

    if(udpServer==NULL)
        udpServer = new QUdpSocket();

    if(udpServer->state()==QAbstractSocket::UnconnectedState && !udpServer->bind(serverIP,serverPort))
    {
        qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread][error]udpServer failed to bind";
        return;
    }

    connect(udpServer, SIGNAL(readyRead()),
                this, SLOT(readResponse()));
    sendControlOrder("command");
    msleep(500);
    if(respStr!="ok")
    {
        disconnect(udpServer, SIGNAL(readyRead()),
                    this, SLOT(readResponse()));

        qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread][error]failed to connect";
        return;
    }
    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread]connect successfully";
    exec();
}

void udpControllerThread::readResponse()
{
    respStr = udpServer->readAll();
    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread][read]"<<respStr;
}

void udpControllerThread::sendControlOrder(const QString order)
{
    if(udpSocket==NULL)
    {
        qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread][error]udpsocket is null";
        return;
    }
    if(udpSocket->writeDatagram(order.toUtf8(),serverIP,serverPort)==-1)
    {
        qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread][error]failed to send";
        return;
    }
    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")<<"[udpControllerThread][send]"<<order;
}





