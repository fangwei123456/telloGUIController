#ifndef TELLODATA_H
#define TELLODATA_H
#include <QString>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>


//sharedData----------------------------
extern cv::Mat currentFrame;
extern QString min_control_division_value;
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
