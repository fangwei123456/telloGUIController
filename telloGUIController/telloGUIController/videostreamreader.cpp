#include "videostreamreader.h"
#include <QDateTime>

videoStreamReader::videoStreamReader(QObject *parent) : QObject(parent)
{
    className = "[videoStreamReader]";
    //videoURL = "udp://0.0.0.0:11111?overrun_nonfatal=1&fifo_size=5000000";
    videoURL = "udp://127.0.0.1:6666?overrun_nonfatal=1&fifo_size=50000000";
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
    RBFWritePos = 0;

    while(1)
    {

        if(!camera.read(RBF[RBFWritePos]))
        {
            printLog(className,"[error]can't open frame from stream");
            break;
        }
        imshow("tello camera",RBF[RBFWritePos]);
        RBFWritePos++;
        if(RBFWritePos==MAT_RING_BUFFER_NUM)
            RBFWritePos = 0;
        cv::waitKey(1);

    }
}
