#include "calculator.h"

#include <QPushButton>
#include <QLabel>


Calculator::Calculator()
{
	setFixedSize(400,300);
	//QLabel label("HelloWorld");
	m_resultLabel = new QLabel("Iotek Calculator!",this);
	m_resultLabel->setGeometry(10,10,380,80);

	m_equalBtn = new QPushButton("=",this);
	m_equalBtn->setGeometry(10,90,90,30);

	connect(m_equalBtn,SIGNAL(clicked()),this,SLOT(equalBtnClicked()));
}

Calculator::~Calculator()
{
}

void Calculator::equalBtnClicked()
{
	m_resultLabel->setText("You result shows here!");
}

