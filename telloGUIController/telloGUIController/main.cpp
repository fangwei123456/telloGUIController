#include "mainwindow.h"
#include <QApplication>
#include <QThread>
#include <QDebug>

#include "tellodata.h"


int main(int argc, char *argv[])
{

    char tesd[1200];
    char ts[100];
    strcpy(tesd,"pitch:-6;roll:-1;yaw:0;vgx:0;vgy:0;vgz:0;templ:70;temph:72;tof:10;h:0;bat:44;baro:-88.59;time:0;agx:-106.00;agy:31.00;agz:-985.00;\r\n");
    qDebug()<<sscanf(tesd,"%s%d%s%d;:%d;:%d;:%d;:%d;:%d;:%d;:%d;:%d;:%d;:%f;:%d;:%f;:%f;:%f;\r\n",
           ts,&tello_pitch,ts,&tello_roll,&tello_yaw,
           &tello_vgx,&tello_vgy,tello_vgz,
           &tello_templ,&tello_temph,
           &tello_tof,&tello_h,&tello_bat,
           &tello_baro,&tello_time,
           &tello_agx,&tello_agy,&tello_agz);
    printf("pitch:%d;roll:%d;yaw:%d;vgx:%d;vgy:%d;vgz:%d;templ:%d;temph:%d;tof:%d;h:%d;bat:%d;baro:%f;time:%d;agx:%f;agy:%f;agz:%f;\n",
           tello_pitch,tello_roll,tello_yaw,
           tello_vgx,tello_vgy,tello_vgz,
           tello_templ,tello_temph,
           tello_tof,tello_h,tello_bat,
           tello_baro,tello_time,
           tello_agx,tello_agy,tello_agz);
    fflush(stdout);
    QApplication a(argc, argv);
    MainWindow mw;
    mw.show();

    return a.exec();
}
