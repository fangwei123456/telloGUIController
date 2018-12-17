#include "videostreamsaver.h"
#include "tellodata.h"
#include <QDateTime>
videoStreamSaver::videoStreamSaver(QObject *parent) : QObject(parent)
{
    className = "videoStreamSaver";

}

void videoStreamSaver::init()
{
    fileName = QDateTime::currentDateTime().toString("yyyy-MM-dd_hh:mm:ss.zzz");
    fileName.append(".avi");
    if(!videoSaver.open(fileName.toStdString(),cv::VideoWriter::fourcc('X','2','6','4'),25,cv::Size(960,720)))
    {
        printLog(className,"[error]can't save video stream into file");
        return;
    }
    else
    {
        printLog(className,"start to save video stream into file");
    }

    this->moveToThread(&videoSaverThread);
    videoSaverThread.start();

}

void videoStreamSaver::startToSave()
{
    RBFReadPos = 0;
    while(1)
    {
        while(RBFReadPos==RBFWritePos)
        {
            QThread::msleep(1);
        }
        videoSaver.write(RBF[RBFReadPos]);
        RBFReadPos++;
        if(RBFReadPos==MAT_RING_BUFFER_NUM)
            RBFReadPos = 0;
    }
}



