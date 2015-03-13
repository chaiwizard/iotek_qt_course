#include "data.h"

Data::Data(int val)
	:m_val(val)
{
}

Data::~Data()
{
}

void Data::setVal(int val)
{
	if(m_val != val){
		m_val = val;
		emit valueChanged(m_val);
	}
}

int Data::getVal() const 
{
	return m_val;
}
