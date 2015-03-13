#ifndef _CALCULATOR_H
#define _CALCULATOR_H

#include <QWidget>

class QLabel;
class QPushButton;

class Calculator : public QWidget
{
	Q_OBJECT
public:
	Calculator();
	~Calculator();

private slots:
	void equalBtnClicked();

private:
	QLabel *m_resultLabel;
	QPushButton *m_equalBtn;

};

#endif
