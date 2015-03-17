#include "Thread.h"
#include <QDebug>

Thread::Thread(QObject *parent)
    :QThread(parent)
{

}

Thread::~Thread()
{

}

void Thread::run(){
    qDebug() << "thread " << QThread::currentThreadId() << endl;
    for(int i=0; i < 100000; i++){
        int val=0;
        float ret = val*0.5;
    }
    emit workingfinished();
}
