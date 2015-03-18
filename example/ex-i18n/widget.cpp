#include "widget.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>


Widget::Widget(QWidget *parent)
	:QWidget(parent)
{
	QVBoxLayout *layout = new QVBoxLayout;
	label = new QLabel(tr("put_msg_here"));
	layout->addWidget(label);
	
	button = new QPushButton(tr("click_me"));
	layout->addWidget(button);

	setLayout(layout);
}

Widget::~Widget()
{
}


