#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    connect(ui->openCameraButton,SIGNAL(released()),&vsr,SLOT(openStream()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

