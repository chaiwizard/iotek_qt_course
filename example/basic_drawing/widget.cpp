#include "widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent)
    :QWidget(parent)
{
    resize(100,100);
}

Widget::~Widget(){

}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);

    p.setBrush(Qt::green);
    p.drawRect(10, 10, width()-20, height()-20);
    p.setBrush(Qt::yellow);
    p.drawEllipse(20, 20, width()-40, height()-40);

}
