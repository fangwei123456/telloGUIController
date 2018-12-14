#include "videostreamreader.h"
#include "tellodata.h"
videoStreamReader::videoStreamReader(QObject *parent) : QObject(parent)
{
    className = "[videoStreamReader]";
    videoURL = "udp://0.0.0.0:11111";
    //videoURL = "udp://192.168.113.56:6666?overrun_nonfatal=1&fifo_size=50000000";
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


    while(1)
    {

        if(!camera.read(currentFrame))
        {
            printLog(className,"[error]can't open frame from stream");
            break;
        }

        imshow("tello camera",currentFrame);
        cv::waitKey(33);//30 FPS
    }
}
