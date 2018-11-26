#include "tellocontroller.h"
#include "tellodata.h"

telloController::telloController(QObject *parent) : QObject(parent)
{

    orderSender.rename("orderSender");
    //orderSender.setIPandPort("192.168.10.1",8889);
    orderSender.setIPandPort("localhost",8889);
    orderSender.moveToThread(&senderThread);
    readerThread.start();
    printLog("[readerThread]","thread is running");

    responseReader.rename("responseReader");
    //responseReader.setUdpServer("192.168.10.1",8889);
    responseReader.setUdpServer("localhost",8889);
    responseReader.moveToThread(&readerThread);
    senderThread.start();
    printLog("[senderThread]","thread is running");


    connect(this,SIGNAL(sendOrder(QString)),&orderSender,SLOT(sendMesg(QString)));

}





