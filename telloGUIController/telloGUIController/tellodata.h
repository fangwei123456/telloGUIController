#ifndef TELLODATA_H
#define TELLODATA_H
#include <QString>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#define MIN_MOVE_DISTANCE 20//tello's min move distance in one order is 20cm
#define MAX_MOVE_DISTANCE 100//tello's max move distance in one order is 100cm
#define MIN_ROTATE_DEGREE 1//tello's min rotate degree in one order is 1
#define MAX_ROTATE_DEGREE 360//tello's max rotate degree in one order is 360


#define MIN_SEND_ORDER_INTERVAL 100




//sharedData----------------------------
extern cv::Mat currentFrame;


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
