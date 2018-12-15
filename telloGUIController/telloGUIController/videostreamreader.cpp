#include "videostreamreader.h"
#include <QTime>

videoStreamReader::videoStreamReader(QObject *parent) : QObject(parent)
{
    className = "[videoStreamReader]";
    //videoURL = "udp://0.0.0.0:11111?overrun_nonfatal=1&fifo_size=50000000";
    videoURL = "udp://192.168.43.248:6666?overrun_nonfatal=1&fifo_size=50000000";
    hasBeenOpened = false;
    this->moveToThread(&videoStreamReaderThread);
    videoStreamReaderThread.start();
}

void videoStreamReader::setVideoURL(const QString url)
{
    videoURL = url;
}




void videoStreamReader::openStream()
{
    if(hasBeenOpened)
    {
        printLog(className,"video stream has been opened");
    }
    printLog(className,"open the video stream "+videoURL);
    camera.open(videoURL.toStdString());
    if(!camera.isOpened())
    {
        printLog(className,"[error]can't open the video stream");
        return;
    }
    cv::namedWindow("tello camera");
    hasBeenOpened = true;

#if SAVE_VIDEO_STREAM
    if(!camera.read(currentFrame))
    {
        printLog(className,"[error]can't open frame from stream");
        return;
    }
    fileName = QTime::currentTime().toString("yyyy-MM-dd_hh:mm:ss.zzz");
    fileName.append(".avi");
    if(!videoSaver.open(fileName.toStdString(),cv::VideoWriter::fourcc('X','2','6','4'),30,cv::Size(currentFrame.cols,currentFrame.rows)))
    {
        printLog(className,"[error]can't save video stream into file");
        return;
    }
    else
    {
        printLog(className,"[error]start to save video stream into file");
    }

#endif
    while(1)
    {

        if(!camera.read(currentFrame))
        {
            printLog(className,"[error]can't open frame from stream");
            break;
        }
#if SAVE_VIDEO_STREAM
        videoSaver.write(currentFrame);

#endif

        imshow("tello camera",currentFrame);
        cv::waitKey(33);//30 FPS

    }
}
