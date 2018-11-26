#ifndef VIDEOSTREAMREADER_H
#define VIDEOSTREAMREADER_H

#include <QObject>
#include <QThread>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

class videoStreamReader : public QObject
{
    Q_OBJECT
public:
    explicit videoStreamReader(QObject *parent = 0);



private:
    cv::VideoCapture camera;
    QString videoURL;
    QThread videoStreamReaderThread;
    QString className;
    bool opened;
signals:

public slots:
    void setVideoURL(const QString url);
    void openStream();
};

#endif // VIDEOSTREAMREADER_H
