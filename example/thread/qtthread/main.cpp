#include <QApplication>
#include "widget.h"
#include <QDebug>
#include <QThread>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Widget widget;
    widget.show();

    qDebug() << "main thread id " << QThread::currentThreadId() << endl;


    return app.exec();
}
