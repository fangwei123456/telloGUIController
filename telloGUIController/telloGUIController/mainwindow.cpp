#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tellodata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    connect(ui->openCameraButton,SIGNAL(released()),&mVideoStreamReader,SLOT(openStream()));
    connect(&mTelloController.stateReader,SIGNAL(newTelloStateGot()),this,SLOT(updateTelloStateInGui()));
    connect(&mTelloController.stateReader,SIGNAL(newTelloWifiSnrGot()),this,SLOT(updateTelloWifiSnrInGui());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateTelloStateInGui()
{
    //pitch:0;roll:1;yaw:0;vgx:0;vgy:0;vgz:0;templ:70;temph:71;tof:10;h:0;bat:9;baro:-84.29;time:0;agx:10.00;agy:-20.00;agz:-990.00;

    ui->telloPitch->setValue(tello_pitch);
    ui->telloRoll->setValue(tello_roll);
    ui->telloYaw->setValue(tello_yaw);
    ui->telloPitchV->display(tello_pitch);
    ui->telloRollV->display(tello_roll);
    ui->telloYawV->display(tello_yaw);

    ui->telloVgx->setValue(tello_vgx);
    ui->telloVgy->setValue(tello_vgy);
    ui->telloVgz->setValue(tello_vgz);

    ui->telloAgx->setValue(tello_agx);
    ui->telloAgy->setValue(tello_agy);
    ui->telloAgz->setValue(tello_agz);

    ui->telloBat->setValue(tello_bat);

    ui->telloBaro->setValue(tello_baro);
    ui->telloH->setValue(tello_h);
    if(tello_tof==6553)
        ui->telloTof->setValue(-1);
    else
        ui->telloTof->setValue(tello_tof);

}

void MainWindow::updateTelloWifiSnrInGui()
{
    ui->telloWIFI->setValue(tello_WifiSnr);
}

void MainWindow::on_connectTelloButton_released()
{
    emit(mTelloController.sendOrder("command"));
    emit(mTelloController.sendOrder("streamon"));

}
