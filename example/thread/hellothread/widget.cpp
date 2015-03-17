#include "widget.h"
#include <QHBoxLayout>
#include <QDebug>
#include <QLabel>
#include <QThread>


Widget::Widget(QWidget *parent)
    :QWidget(parent)
{
    QHBoxLayout *layout = new QHBoxLayout;
    label = new QLabel("Hello World");

    layout->addWidget(label);
    setLayout(layout);
}

Widget::~Widget()
{

}

void Widget::working()
{
    qDebug() << "thread " << QThread::currentThreadId() << endl;
    qDebug() << "do working" << endl;
    label->setText("Thread finished");
}

