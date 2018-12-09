#ifndef TELLOCONTROLLER_H
#define TELLOCONTROLLER_H

#include <QObject>
#include <QThread>

#include "udpclient.h"


class telloController : public QObject
{
    Q_OBJECT
public:
    explicit telloController(QObject *parent = 0);
    udpClient orderSender;
    udpClient stateReader;

private:
    QThread controllerThread;

    QThread senderThread;
    QThread readerThread;



signals:

    void telloResponse(const bool resp);
    void sendOrder(const QString order);

public slots:



};

#endif // TELLOCONTROLLER_H
