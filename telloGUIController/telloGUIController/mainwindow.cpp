#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tellodata.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
#if SEND_ORDER_UNTILL_GOT_REPLY
    canSendNextOrder = true;
#endif


    ui->setupUi(this);
    this->grabKeyboard();
    ui->orderLabel->setStyleSheet("color:green");
    ui->moveSensitivity->setMaximum(MAX_MOVE_DISTANCE);
    ui->moveSensitivity->setMinimum(MIN_MOVE_DISTANCE);
    ui->rotateSensitivity->setMinimum(MIN_ROTATE_DEGREE);
    ui->rotateSensitivity->setMaximum(MAX_ROTATE_DEGREE);
    ui->moveSpeed->setMinimum(MIN_MOVE_SPEED);
    ui->moveSpeed->setMaximum(MAX_MOVE_SPEED);




    connect(ui->openCameraButton,SIGNAL(released()),&mVideoStreamReader,SLOT(openStream()));
#if SAVE_VIDEO_STREAM
    mVideoStreamSaver.init();
    connect(ui->openCameraButton,SIGNAL(released()),&mVideoStreamSaver,SLOT(startToSave()));
#endif
    connect(&mTelloController.stateReader,SIGNAL(newTelloStateGot()),this,SLOT(updateTelloStateInGui()));
    connect(&mTelloController.orderSender,SIGNAL(newTelloWifiSnrGot()),this,SLOT(updateTelloWifiSnrInGui()));
    connect(&mTelloController.orderSender,SIGNAL(newTelloReplyGot(QString)),this,SLOT(updateReceivedReply(QString)));

    orderCounter = 0;
    replyCounter = 0;
    connect(&keyOrderSendTimer,SIGNAL(timeout()),this,SLOT(sendKeyOrder()));
    keyOrderSendTimer.start(SEND_ORDER_TIMER_INTERVAL);

    for(int i=0; i<8; i++)
    {
        keyPressed[i] = false;
        keyPressed2[i] = false;
    }


    moveDistance = MIN_MOVE_DISTANCE;
    rotateDegree = MIN_ROTATE_DEGREE;
    moveSpeed = MIN_MOVE_SPEED;
    moveDistanceStr = QString::number(moveDistance);
    rotateDegreeStr = QString::number(rotateDegree);
    moveSpeedStr = QString::number(moveSpeed);

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
#if SEND_ORDER_UNTILL_GOT_REPLY
    canSendNextOrder = true;
#endif
    ui->orderLabel->setStyleSheet("color:green");
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

#if SEND_ORDER_UNTILL_GOT_REPLY
    if(!canSendNextOrder)
    {
         //ui->orderTextBrowser->append("[error]can not send this order untill got last order's reply");
         return;
    }
#endif

    int keyID = -1;
    switch (ev->key())
    {
        case Qt::Key_F1:
            updateSentOrder("command");
            emit(mTelloController.sendOrder("command"));
#if SEND_ORDER_UNTILL_GOT_REPLY
            canSendNextOrder = false;
            ui->orderLabel->setStyleSheet("color:red");
#endif
            return;
            break;
        case Qt::Key_F2:
            updateSentOrder("emergency");
            emit(mTelloController.sendOrder("emergency"));
#if SEND_ORDER_UNTILL_GOT_REPLY
            canSendNextOrder = false;
            ui->orderLabel->setStyleSheet("color:red");
#endif
            return;
            break;
        case Qt::Key_F3:
            updateSentOrder("streamon");
            emit(mTelloController.sendOrder("streamon"));
#if SEND_ORDER_UNTILL_GOT_REPLY
            canSendNextOrder = false;
            ui->orderLabel->setStyleSheet("color:red");
#endif
            return;
            break;
        case Qt::Key_F4:
            updateSentOrder("streamoff");
            emit(mTelloController.sendOrder("streamoff"));
#if SEND_ORDER_UNTILL_GOT_REPLY
            canSendNextOrder = false;
            ui->orderLabel->setStyleSheet("color:red");
#endif
            return;
            break;
        case Qt::Key_F5:
            updateSentOrder("takeoff");
            emit(mTelloController.sendOrder("takeoff"));
#if SEND_ORDER_UNTILL_GOT_REPLY
            canSendNextOrder = false;
            ui->orderLabel->setStyleSheet("color:red");
#endif
            return;
            break;
        case Qt::Key_F6:
            updateSentOrder("land");
            emit(mTelloController.sendOrder("land"));
#if SEND_ORDER_UNTILL_GOT_REPLY
            canSendNextOrder = false;
            ui->orderLabel->setStyleSheet("color:red");
#endif
            return;
            break;
        case Qt::Key_W:
            keyID = 0;
            break;
        case Qt::Key_A:
            keyID = 1;
            break;
        case Qt::Key_S:
            keyID = 2;
            break;
        case Qt::Key_D:
            keyID = 3;
            break;
        case Qt::Key_Up:
            keyID = 4;
            break;
        case Qt::Key_Down:
            keyID = 5;
            break;
        case Qt::Key_Q:
            keyID = 6;
            break;
        case Qt::Key_E:
            keyID = 7;
            break;
        case Qt::Key_1:
            if(moveDistance>MIN_MOVE_DISTANCE)
            {
                moveDistance--;
                moveDistanceStr = QString::number(moveDistance);
                updateMoveSensitivityInGui();
            }
            break;
        case Qt::Key_2:
            if(moveDistance<MAX_MOVE_DISTANCE)
            {
                moveDistance++;
                moveDistanceStr = QString::number(moveDistance);
                updateMoveSensitivityInGui();
            }
            break;
        case Qt::Key_3:
            if(rotateDegree>MIN_ROTATE_DEGREE)
            {
                rotateDegree--;
                rotateDegreeStr = QString::number(rotateDegree);
                updateRotateSensitivityInGui();
            }
            break;
        case Qt::Key_4:
        if(rotateDegree<MAX_ROTATE_DEGREE)
        {
            rotateDegree++;
            rotateDegreeStr = QString::number(rotateDegree);
            updateRotateSensitivityInGui();
        }
            break;
        case Qt::Key_5:
        if(moveSpeed>MIN_MOVE_SPEED)
        {
            moveSpeed--;
            moveSpeedStr = QString::number(moveSpeed);
            updateMoveSpeedInGui();
        }
            break;
        case Qt::Key_6:
        if(moveSpeed<MAX_MOVE_SPEED)
        {
            moveSpeed++;
            moveSpeedStr = QString::number(moveSpeed);
            updateMoveSpeedInGui();
        }
            break;
        default:
        break;
    }

    if(keyID!=-1)
    {
        keyPressed[keyID] = true;
        keyPressed2[keyID] = true;
    }

}

void MainWindow::keyReleaseEvent(QKeyEvent *ev)
{

    int keyID = -1;
    switch (ev->key())
    {
        case Qt::Key_W:
            keyID = 0;
            break;
        case Qt::Key_A:
            keyID = 1;
            break;
        case Qt::Key_S:
            keyID = 2;
            break;
        case Qt::Key_D:
            keyID = 3;
            break;
        case Qt::Key_Up:
            keyID = 4;
            break;
        case Qt::Key_Down:
            keyID = 5;
            break;
        case Qt::Key_Q:
            keyID = 6;
            break;
        case Qt::Key_E:
            keyID = 7;
            break;
        case Qt::Key_Y:
        {
#if SEND_ORDER_UNTILL_GOT_REPLY
            if(!canSendNextOrder)
            {
                //ui->orderTextBrowser->append("[error]can not send this order untill got last order's reply");
                return;
            }
#endif
            QString newOrder = "speed ";
            newOrder.append(moveSpeedStr);
            updateSentOrder(newOrder);
            emit(mTelloController.sendOrder(newOrder));
            ui->moveSpeedLabel->setStyleSheet("color:green");
            return;
        }
            break;

        default:
        break;
    }

    if(keyID!=-1)
    {
        keyPressed[keyID] = false;
        checkKeyList.enqueue(keyID);
        QTimer::singleShot(20,this,SLOT(checkKeyReallyReleased()));
    }
}


void MainWindow::sendKeyOrder()
{
    for(int i=0; i<=8; i++)
    {
        if(keyPressed[i])
            break;
        if(i==8)
            return;
    }
#if SEND_ORDER_UNTILL_GOT_REPLY
    if(!canSendNextOrder)
    {
        //ui->orderTextBrowser->append("[error]can not send this order untill got last order's reply");
        return;
    }
#endif
    QString newOrder;

    if(keyPressed2[0] && keyPressed2[2])//W + S = NULL
    {
        keyPressed2[0] = false;
        keyPressed2[2] = false;
    }
    if(keyPressed2[1] && keyPressed2[3])//A + D = NULL
    {
        keyPressed2[1] = false;
        keyPressed2[3] = false;
    }
    if(keyPressed2[4] && keyPressed2[5])//↑ + ↓ = NULL
    {
        keyPressed2[4] = false;
        keyPressed2[5] = false;
    }
    if(keyPressed2[6] && keyPressed2[7])//Q + E = NULL
    {
        keyPressed2[6] = false;
        keyPressed2[7] = false;
    }

    if(keyPressed2[6])
    {
        newOrder = "ccw ";
        newOrder.append(rotateDegreeStr);
#if SEND_ORDER_UNTILL_GOT_REPLY
        canSendNextOrder = false;
        ui->orderLabel->setStyleSheet("color:red");
#endif
        updateSentOrder(newOrder);
        emit(mTelloController.sendOrder(newOrder));
        return;
    }

    if(keyPressed2[7])
    {
        newOrder = "cw ";
        newOrder.append(rotateDegreeStr);
#if SEND_ORDER_UNTILL_GOT_REPLY
        canSendNextOrder = false;
        ui->orderLabel->setStyleSheet("color:red");
#endif
        updateSentOrder(newOrder);
        emit(mTelloController.sendOrder(newOrder));
        return;
    }


    int sumOfKeyPressed = 0;
    for(int i=0; i<6; i++)
    {
        if(keyPressed2[i])
            sumOfKeyPressed++;
    }


    if(sumOfKeyPressed==0)
        return;

    if(sumOfKeyPressed==1)
    {
        if(keyPressed2[0])
        {
            newOrder = "up ";
            newOrder.append(moveDistanceStr);
        }
        else
        if(keyPressed2[1])
        {
            newOrder = "left ";
            newOrder.append(moveDistanceStr);
        }
        else
        if(keyPressed2[2])
        {
            newOrder = "down ";
            newOrder.append(moveDistanceStr);
        }
        else
        if(keyPressed2[3])
        {
            newOrder = "right ";
            newOrder.append(moveDistanceStr);
        }
        else
        if(keyPressed2[4])
        {
            newOrder = "forward ";
            newOrder.append(moveDistanceStr);
        }
        else
        if(keyPressed2[5])
        {
            newOrder = "back ";
            newOrder.append(moveDistanceStr);
        }

#if SEND_ORDER_UNTILL_GOT_REPLY
        canSendNextOrder = false;
        ui->orderLabel->setStyleSheet("color:red");
#endif
        updateSentOrder(newOrder);
        emit(mTelloController.sendOrder(newOrder));

        return;
    }

    /*
     * x+ forward   4
     * x- back      5
     * y+ right     3
     * y- left      1
     * z+ up        0
     * z- down      2
     * */
    newOrder = "go ";

    //x
    if(keyPressed2[4])
    {
        newOrder.append(moveDistanceStr);
        newOrder.append(" ");
    }
    else
        if(keyPressed2[5])
        {
            newOrder.append("-");
            newOrder.append(moveDistanceStr);
            newOrder.append(" ");
        }
    else
        {
            newOrder.append("0 ");
        }

    //y
    if(keyPressed2[3])
    {
        newOrder.append(moveDistanceStr);
        newOrder.append(" ");
    }
    else
        if(keyPressed2[1])
        {
            newOrder.append("-");
            newOrder.append(moveDistanceStr);
            newOrder.append(" ");
        }
    else
        {
            newOrder.append("0 ");
        }

    //z
    if(keyPressed2[0])
    {
        newOrder.append(moveDistanceStr);
        newOrder.append(" ");
    }
    else
        if(keyPressed2[2])
        {
            newOrder.append("-");
            newOrder.append(moveDistanceStr);
            newOrder.append(" ");
        }
    else
        {
            newOrder.append("0 ");
        }

    newOrder.append(moveSpeedStr);
#if SEND_ORDER_UNTILL_GOT_REPLY
        canSendNextOrder = false;
        ui->orderLabel->setStyleSheet("color:red");
#endif
        updateSentOrder(newOrder);
        emit(mTelloController.sendOrder(newOrder));





}

void MainWindow::checkKeyReallyReleased()
{
    int keyID = checkKeyList.dequeue();
    if(!keyPressed[keyID])//really released
        keyPressed2[keyID] = false;
}

void MainWindow::updateMoveSensitivityInGui()
{
    ui->moveSensitivity->setValue(moveDistance);
}

void MainWindow::updateRotateSensitivityInGui()
{
    ui->rotateSensitivity->setValue(rotateDegree);

}

void MainWindow::updateMoveSpeedInGui()
{
    ui->moveSpeed->setValue(moveSpeed);
    ui->moveSpeedLabel->setStyleSheet("color:red");
}

void MainWindow::on_controlModeComboBox_currentIndexChanged(int index)
{
    if(index==0)
    {
        this->grabKeyboard();
        ui->commandLineEdit->setEnabled(false);
    }
    else
    {
        ui->commandLineEdit->grabKeyboard();
        ui->commandLineEdit->setEnabled(true);
    }
}

void MainWindow::on_commandLineEdit_returnPressed()
{
    QString newOrder = ui->commandLineEdit->text();
    ui->commandLineEdit->clear();
    updateSentOrder(newOrder);
    emit(mTelloController.sendOrder(newOrder));
}


