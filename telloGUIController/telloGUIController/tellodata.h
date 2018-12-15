#ifndef TELLODATA_H
#define TELLODATA_H
#include <QString>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <QMutex>

#define MIN_MOVE_DISTANCE 20//tello's min move distance in one order is 20cm
#define MAX_MOVE_DISTANCE 100//tello's max move distance in one order is 100cm
#define MIN_ROTATE_DEGREE 1//tello's min rotate degree in one order is 1
#define MAX_ROTATE_DEGREE 360//tello's max rotate degree in one order is 360
#define MIN_MOVE_SPEED 10//tello's min speed is 10cm/s
#define MAX_MOVE_SPEED 100//tello's max speed is 100cm/s

#define UPDATE_WIFI_SNR_INTERVAL 5000000//update wifi snr every 5000ms

#define SEND_ORDER_TIMER_INTERVAL 100//check input order from keyboard every 100ms

#define SEND_ORDER_UNTILL_GOT_REPLY 0//if 0, we can send next order without receiving last order's reply

#define SAVE_VIDEO_STREAM 1//if 1, we will save video stream into .avi file


//sharedData----------------------------

extern cv::Mat currentFrame;

#if SEND_ORDER_UNTILL_GOT_REPLY
extern bool canSendNextOrder;//only when tello reply last order that we can send next order
#endif

//state data will come in 10HZ
extern int tello_pitch;
extern int tello_roll;
extern int tello_yaw;
extern int tello_vgx;
extern int tello_vgy;
extern int tello_vgz;
extern int tello_templ;
extern int tello_temph;
extern int tello_tof;
extern int tello_h;
extern int tello_bat;
extern float tello_baro;
extern int tello_time;
extern float tello_agx;
extern float tello_agy;
extern float tello_agz;
extern int tello_wifiSnr;


//--------------------------------------


void printLog(const QString className, const QString info);







#endif // TELLODATA_H
