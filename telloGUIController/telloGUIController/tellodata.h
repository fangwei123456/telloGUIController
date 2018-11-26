#ifndef TELLODATA_H
#define TELLODATA_H
#include <QString>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

//sharedData----------------------------
extern cv::Mat currentFrame;



//--------------------------------------


void printLog(const QString className, const QString info);

class telloData
{
public:
    telloData();
};





#endif // TELLODATA_H
