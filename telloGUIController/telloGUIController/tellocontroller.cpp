#include "tellocontroller.h"
#include "tellodata.h"

telloController::telloController(QObject *parent) : QObject(parent)
{

    orderSender.rename("orderSender");
    orderSender.setIPandPort("192.168.10.1",8889);
    orderSender.moveToThread(&senderThread);
    senderThread.start();
    connect(this,SIGNAL(sendOrder(QString)),&orderSender,SLOT(sendMesg(QString)));


    stateReader.rename("stateRader");
    stateReader.setUdpServer("0.0.0.0",8890,"log.txt");
    stateReader.moveToThread(&readerThread);
    readerThread.start();

    this->moveToThread(&controllerThread);
    controllerThread.start();


}






