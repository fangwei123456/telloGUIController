#include "tellodata.h"
#include <QDateTime>
#include <QDebug>


//sharedData----------------------------
cv::Mat currentFrame;



//--------------------------------------
void printLog(const QString className, const QString info)
{
    qDebug()<<QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zzz")
            <<className<<info;
}

telloData::telloData()
{

}





