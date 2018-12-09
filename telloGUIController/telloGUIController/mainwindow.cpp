#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tellodata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    this->grabKeyboard();


    connect(ui->openCameraButton,SIGNAL(released()),&mVideoStreamReader,SLOT(openStream()));
    connect(&mTelloController.stateReader,SIGNAL(newTelloStateGot()),this,SLOT(updateTelloStateInGui()));
    connect(&mTelloController.orderSender,SIGNAL(newTelloWifiSnrGot()),this,SLOT(updateTelloWifiSnrInGui()));
    connect(&mTelloController.orderSender,SIGNAL(newTelloReplyGot(QString)),this,SLOT(updateReceivedReply(QString)));

    orderCounter = 0;
    replyCounter = 0;
    connect(&keyOrderSendTimer,SIGNAL(timeout()),this,SLOT(sendKeyOrder()));
    keyOrderSendTimer.start(100);

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
    ui->telloAgxV->display(tello_agx);
    ui->telloAgyV->display(tello_agy);
    ui->telloAgzV->display(tello_agz);

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
    ui->telloWIFI->setValue(tello_wifiSnr);
}

void MainWindow::on_connectTelloButton_released()
{
    emit(mTelloController.sendOrder("command"));
    updateSentOrder("command");

}

void MainWindow::updateSentOrder(const QString newOrder)
{
    orderCounter = orderCounter + 1;
    ui->orderTextBrowser->append("[" + QString::number(orderCounter) + "] " + newOrder);
}

void MainWindow::updateReceivedReply(const QString newReply)
{
    replyCounter = replyCounter + 1;
    ui->replyTextBrowser->append("[" + QString::number(replyCounter) + "] " + newReply);
}

void MainWindow::on_openCameraButton_released()
{
    emit(mTelloController.sendOrder("streamon"));
    updateSentOrder("streamon");
}


void MainWindow::keyPressEvent(QKeyEvent *ev)
{
    if(pressedKey.indexOf(ev->key())==-1)
        pressedKey.append(ev->key());

}

void MainWindow::keyReleaseEvent(QKeyEvent *ev)
{
    int keyPos = pressedKey.indexOf(ev->key());
    if(keyPos>=0)
    pressedKey.remove(keyPos);
}

void MainWindow::sendKeyOrder()
{
    if(!pressedKey.isEmpty())
    {
        for(pressedKeyIter = pressedKey.begin(); pressedKeyIter!=pressedKey.end(); pressedKeyIter++)\
        {
            /*
             * key  function
             * same as fly a plane in GTA
             * F1   connect to tello and start command mode
             * F2   stop tello's engine, EMERGENCY
             * F3   open video stream
             * F4   off video stream
             * F5   takeoff
             * F6   land
             * W    up
             * S    down
             * A    left
             * D    right
             * ↑    forward
             * ↓    back
             * Q    ccw, ↺
             * E    cw, ↻
             *
             * */
            switch (*pressedKeyIter) {
            case Qt::Key_F1:
                updateSentOrder("command");
                emit(mTelloController.sendOrder("command"));
                break;
            case Qt::Key_F2:
                updateSentOrder("emergency");
                emit(mTelloController.sendOrder("emergency"));
                break;
            case Qt::Key_F3:
                updateSentOrder("streamon");
                emit(mTelloController.sendOrder("streamon"));
                break;
            case Qt::Key_F4:
                updateSentOrder("streamoff");
                emit(mTelloController.sendOrder("streamoff"));
                break;
            case Qt::Key_F5:
                updateSentOrder("takeoff");
                emit(mTelloController.sendOrder("takeoff"));
                break;
            case Qt::Key_F6:
                updateSentOrder("land");
                emit(mTelloController.sendOrder("land"));
                break;
            case Qt::Key_W:
                updateSentOrder("up "+min_control_division_value);
                emit(mTelloController.sendOrder("up "+min_control_division_value));
                break;
            case Qt::Key_A:
                updateSentOrder("left "+min_control_division_value);
                emit(mTelloController.sendOrder("left "+min_control_division_value));
                break;
            case Qt::Key_S:
                updateSentOrder("down "+min_control_division_value);
                emit(mTelloController.sendOrder("down "+min_control_division_value));
                break;
            case Qt::Key_D:
                updateSentOrder("right "+min_control_division_value);
                emit(mTelloController.sendOrder("right "+min_control_division_value));
                break;
            case Qt::Key_Up:
                updateSentOrder("forward "+min_control_division_value);
                emit(mTelloController.sendOrder("forward "+min_control_division_value));
                break;
            case Qt::Key_Down:
                updateSentOrder("back "+min_control_division_value);
                emit(mTelloController.sendOrder("back "+min_control_division_value));
                break;
            case Qt::Key_Q:
                updateSentOrder("ccw "+min_control_division_value);
                emit(mTelloController.sendOrder("ccw "+min_control_division_value));
                break;
            case Qt::Key_E:
                updateSentOrder("cw "+min_control_division_value);
                emit(mTelloController.sendOrder("cw "+min_control_division_value));
                break;
            default:
                break;
            }
        }

    }
}


