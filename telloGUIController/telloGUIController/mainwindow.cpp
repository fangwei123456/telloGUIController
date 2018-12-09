#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tellodata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    connect(ui->openCameraButton,SIGNAL(released()),&mVideoStreamReader,SLOT(openStream()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_connectTelloButton_released()
{
    emit(mTelloController.sendOrder("command"));
    emit(mTelloController.sendOrder("streamon"));

}
