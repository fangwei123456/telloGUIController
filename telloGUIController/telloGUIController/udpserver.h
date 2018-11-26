#ifndef UDPSERVER_H
#define UDPSERVER_H


#include <QUdpSocket>
#include <QFile>

class udpServer : public QObject
{
    Q_OBJECT
public:
    explicit udpServer(QObject *parent = 0);
    bool setUdpServer(const QString ip = "0.0.0.0", const quint16 port = 8890,
                      const QString fileName = NULL);
    //if fileName!=NULL, data from udp will save to file
    void rename(const QString newName);

private:
    QString className;
    QUdpSocket *udpSocket;
    QHostAddress listenedIP;
    quint16 listenedPort;
    char *receivedData;
    qint64 receivedDataSize, newDataSize;
    QFile fileWriter;


signals:
    void newMesgGot(const char *newMesg, const qint64 mesgSize);

public slots:
    void readMesg();
};

#endif // UDPSERVER_H
