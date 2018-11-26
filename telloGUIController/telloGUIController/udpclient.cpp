#include "udpclient.h"
#include "tellodata.h"
#include <QThread>
udpClient::udpClient(QObject *parent) : QObject(parent)
{
    className = "[udpClient]";
    udpSocket = new QUdpSocket(this);
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






