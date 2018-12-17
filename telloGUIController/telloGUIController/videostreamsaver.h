#ifndef VIDEOSTREAMSAVER_H
#define VIDEOSTREAMSAVER_H

#include <QObject>
#include <opencv2/videoio.hpp>
#include <QThread>
#include <QAtomicInt>
class videoStreamSaver : public QObject
{
    Q_OBJECT
public:
    explicit videoStreamSaver(QObject *parent = 0);
    void init();



private:
    cv::VideoWriter videoSaver;
    QString fileName;
    QThread videoSaverThread;
    QString className;
    QAtomicInt RBFReadPos;
signals:

public slots:
    void startToSave();
};

#endif // VIDEOSTREAMSAVER_H
