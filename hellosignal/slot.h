#ifndef _SLOT_Exp_H_
#define _SLOT_Exp_H_

#include <QObject>

class SlotExample : public QObject
{
	Q_OBJECT
public:
	SlotExample(int val)
		:m_val(val)
	{
	}
	~SlotExample()
	{
	}

	void setVal(int val)
	{
	}

public slots:
	void doSomething(int val);

private:
	int m_val;
};


#endif
