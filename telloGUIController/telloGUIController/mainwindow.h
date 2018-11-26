#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tellocontroller.h"
#include "videostreamreader.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    videoStreamReader vsr;




private slots:



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
