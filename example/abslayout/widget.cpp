#include "widget.h"

#include <QLabel>
#include <QPushButton>
#include <QDebug>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent)
    :QWidget(parent)
{
    resize(640,480);
    move(200,200);

    QVBoxLayout *layout = new QVBoxLayout;


/*
    label = new QLabel("Some message",this);
    label->setGeometry(10,10,620,100);

    button = new QPushButton("click me",this);
    button->setGeometry(10,120,620,100);
    */
    label = new QLabel("Message");
    layout->addWidget(label);

    button = new QPushButton("Click me!");
    layout->addWidget(button);

    setLayout(layout);

    connect(button,SIGNAL(clicked()),this,
            SLOT(doSomething()));
}

Widget::~Widget()
{

}

void Widget::doSomething()
{
    qDebug() << "doSomething invoked" << endl;
    label->setText("Button clicked");
}
