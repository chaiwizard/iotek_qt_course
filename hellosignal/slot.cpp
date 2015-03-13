#include "slot.h"

#include <QDebug>


void SlotExample::doSomething(int val)
{
	qDebug() << __func__ << val << endl;
	m_val = val;
}

