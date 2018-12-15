#ifndef VIDEOSTREAMREADER_H
#define VIDEOSTREAMREADER_H

#include <QObject>
#include <QThread>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include "tellodata.h"

class videoStreamReader : public QObject
{
    Q_OBJECT
public:
    explicit videoStreamReader(QObject *parent = 0);



private:
    cv::VideoCapture camera;
#if SAVE_VIDEO_STREAM
    cv::VideoWriter videoSaver;
    QString fileName;
#endif

    QString videoURL;
    QThread videoStreamReaderThread;
    QString className;
    bool hasBeenOpened;
signals:

public slots:
    void setVideoURL(const QString url);
    void openStream();
};

#endif // VIDEOSTREAMREADER_H
