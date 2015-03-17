#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QThread>

#include "widget.h"

#include <stdlib.h>
#include "calthread.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    :QWidget(parent)
{
    workThread = NULL;
    label = new QLabel("hello");
    button = new QPushButton("clickme");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(button);

    setLayout(layout);

    connect(button,SIGNAL(clicked()),
            this,SLOT(buttonClicked()));
}

void Widget::buttonClicked()
{
    qDebug() << "widget thread id" << QThread::currentThreadId() << endl;
    workThread = new CalThread;
    workThread->start();
    //label->setText("message");
    connect(workThread,SIGNAL(calFinished()),
            this,SLOT(calFinished()));
    button->setEnabled(false);
}

void Widget::calFinished()
{
    qDebug() << "calFnished" << QThread::currentThreadId() << endl;
    label->setText("Cal finished");
    delete workThread;
    workThread = NULL;
    button->setEnabled(true);
}
