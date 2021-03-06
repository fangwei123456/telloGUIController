#ifndef UDPCLIENT_H
#define UDPCLIENT_H


#include <QUdpSocket>
#include <QFile>
#include <QTimer>
#include <QTime>

class udpClient : public QObject
{
    Q_OBJECT

public:
    explicit udpClient(QObject *parent = 0);
    void setIPandPort(const QString ip, const quint16 port);
    bool setUdpServer(const QString ip = "0.0.0.0", const quint16 port = 8890,
                      const QString fileName = NULL);
    //if fileName!=NULL, data from udp will save to file

    void rename(const QString newName);

    void updateTelloState();

private:
    QString className;
    QUdpSocket *udpSocket;
    QHostAddress serverIP, listenedIP;
    quint16 serverPort, listenedPort;
    char *receivedData;
    qint64 receivedDataSize, newDataSize;
    QFile fileWriter;
    bool isStateReader;//false for orderSender
    QTimer *wifiSnrTimer;//send oder to get wifi snr
    bool justSentWifiSnrOrder;//afer sending wifi snr order, this becomes true; after getting, becomes false


signals:
    void newMesgGot(const char *newMesg, const qint64 mesgSize);
    void newTelloStateGot();
    void newTelloWifiSnrGot();
    void newTelloReplyGot(const QString newReply);

public slots:
    void sendMesg(const QString mesg);

    void readMesg();
    void getTelloWifiSnr();

};

#endif // UDPCLIENT_H
