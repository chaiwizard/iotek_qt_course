#ifndef CALTHREAD_H
#define CALTHREAD_H

#include <QThread>

class CalThread:public QThread
{
    Q_OBJECT
public:
    CalThread(QObject *parent = 0);

protected:
    void run();

signals:
    void calFinished();

};

#endif // CALTHREAD_H
