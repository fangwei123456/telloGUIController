#include "tellodata.h"
#include <QDateTime>
#include <QDebug>


//sharedData----------------------------

cv::Mat RBF[MAT_RING_BUFFER_NUM];

QAtomicInt RBFWritePos;





#if SEND_ORDER_UNTILL_GOT_REPLY
bool canSendNextOrder;
#endif


int tello_pitch;
int tello_roll;
int tello_yaw;

int tello_vgx;
int tello_vgy;
int tello_vgz;

int tello_templ;
int tello_temph;

int tello_tof;
int tello_h;
int tello_bat;

float tello_baro;
int tello_time;

float tello_agx;
float tello_agy;
float tello_agz;

int tello_wifiSnr;



//--------------------------------------
void printLog(const QString className, const QString info)
{
    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")
            <<className<<info;
}








