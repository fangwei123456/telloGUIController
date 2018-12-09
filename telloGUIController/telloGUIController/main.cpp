#include "mainwindow.h"
#include <QApplication>
#include <QThread>



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow mw;
    mw.show();

    return a.exec();
}
