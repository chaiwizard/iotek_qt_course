#include <QApplication>
#include <QLabel>
#include <QDebug>
#include <QThread>

#include "widget.h"
#include "Thread.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qDebug() << "thread " << QThread::currentThreadId() << endl;

    Thread thread;


    Widget widget;
    QObject::connect(&thread,SIGNAL(workingfinished()),&widget,SLOT(working()));

    widget.show();
    thread.start();

    return app.exec();
}
