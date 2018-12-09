#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tellocontroller.h"
#include "videostreamreader.h"
#include <QKeyEvent>
#include <QVector>
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
 *
 * */
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
    QVector<int> pressedKey;
    QVector<int>::iterator pressedKeyIter;
    QTimer keyOrderSendTimer;
private slots:



    void on_connectTelloButton_released();
    void updateTelloStateInGui();
    void updateTelloWifiSnrInGui();
    void updateSentOrder(const QString newOrder);
    void updateReceivedReply(const QString newReply);

    void sendKeyOrder();
    void on_openCameraButton_released();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
