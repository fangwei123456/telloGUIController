#ifndef TELLOCONTROLLER_H
#define TELLOCONTROLLER_H

#include <QObject>
#include <QThread>

#include "udpclient.h"
#include "udpserver.h"

class telloController : public QObject
{
    Q_OBJECT
public:
    explicit telloController(QObject *parent = 0);


private:
    udpClient orderSender;
    QThread senderThread;



    udpServer responseReader;
    QThread readerThread;



signals:
    void sendOrder(const QString order);
    void telloResponse(const bool resp);


public slots:


};

#endif // TELLOCONTROLLER_H
