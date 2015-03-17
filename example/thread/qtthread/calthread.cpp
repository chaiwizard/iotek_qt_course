#include "calthread.h"
#include <QDebug>

CalThread::CalThread(QObject *parent)
    :QThread(parent)
{

}



void CalThread::run()
{
    qDebug() << "work thread run func thread id" << QThread::currentThreadId() << endl;

    for(int i=1;i<1000000000;i++){
        float val = 1/i;
        val += 0.005;
    }

    emit calFinished();
}
