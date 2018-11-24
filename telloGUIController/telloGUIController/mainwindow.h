#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <udpcontrollerthread.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    udpControllerThread controller;


private slots:

    void on_connectButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
