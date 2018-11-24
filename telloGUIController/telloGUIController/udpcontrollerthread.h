#ifndef UDPCONTROLLERTHREAD_H
#define UDPCONTROLLERTHREAD_H

#include <QUdpSocket>
#include <QThread>

class udpControllerThread : public QThread
{
    Q_OBJECT
public:
    explicit udpControllerThread(QThread *parent = 0);
    bool connectToTello(const QString telloIP = "192.168.10.1", const quint16 controlPort = 8889);
    //Use udp to connect tello. If successed, return true.



    void run();
    //start the thread

private:
    QUdpSocket *udpSocket;
    QUdpSocket *udpServer;
    QHostAddress serverIP;
    quint16 serverPort;
    QString respStr;

signals:

public slots:
    void readResponse();
    void sendControlOrder(const QString order);
};

#endif // UDPCONTROLLERTHREAD_H
