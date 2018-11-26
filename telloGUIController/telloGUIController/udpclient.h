#ifndef UDPCLIENT_H
#define UDPCLIENT_H


#include <QUdpSocket>

class udpClient : public QObject
{
    Q_OBJECT

public:
    explicit udpClient(QObject *parent = 0);
    void setIPandPort(const QString ip, const quint16 port);
    void rename(const QString newName);

private:
    QString className;
    QUdpSocket *udpSocket;
    QHostAddress serverIP;
    quint16 serverPort;

signals:

public slots:
    void sendMesg(const QString mesg);
    void sendMesg0();
};

#endif // UDPCLIENT_H
