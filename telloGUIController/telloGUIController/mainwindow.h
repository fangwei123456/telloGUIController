#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tellocontroller.h"
#include "videostreamreader.h"
#include <QKeyEvent>
#include <QQueue>
#include <QTimer>

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
 * 1    decrease move distance
 * 2    increase move distance
 * 3    decrease rotate degree
 * 4    increase rotate degree
 * */

// x = forward
// y = right
// z = up
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    telloController mTelloController;
    videoStreamReader mVideoStreamReader;

private:
    quint64 orderCounter;
    quint64 replyCounter;

    void keyPressEvent(QKeyEvent *ev);
    void keyReleaseEvent(QKeyEvent *ev);

    bool keyPressed[8], keyPressed2[8];
    QQueue<int> checkKeyList;
    QTimer keyOrderSendTimer;

    int moveDistance, rotateDegree;
    QString moveDistanceStr, rotateDegreeStr;

private slots:



    void on_connectTelloButton_released();
    void updateTelloStateInGui();
    void updateTelloWifiSnrInGui();
    void updateSentOrder(const QString newOrder);
    void updateReceivedReply(const QString newReply);

    void checkKeyReallyReleased();
    void sendKeyOrder();
    void on_openCameraButton_released();

    void updateMoveSensitivityInGui();
    void updateRotateSensitivityInGui();

    void on_controlModeComboBox_currentIndexChanged(int index);

    void on_commandLineEdit_returnPressed();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
