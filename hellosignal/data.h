#ifndef _DATA_H_
#define _DATA_H_

#include <QObject>

class Data : public QObject{

	Q_OBJECT

public:
	Data(int val);
	~Data();

	int getVal() const;
	void setVal(int val);

	//void test();
public slots:

signals: //public
	void valueChanged(int);

private:
	int m_val;
};


#endif
