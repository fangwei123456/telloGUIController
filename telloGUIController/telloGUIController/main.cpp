#include "mainwindow.h"
#include <QApplication>
#include <QThread>
#include <QDebug>
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow mw;
    mw.show();

    return a.exec();
}
