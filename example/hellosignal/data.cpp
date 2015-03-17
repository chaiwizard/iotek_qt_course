#include <QDebug>
#include "data.h"

Data::Data(int val)
    :m_val(val)
{
    qDebug() << "this" << this << endl;
}

Data::~Data()
{

}


int Data::getValue() const
{
    return m_val;
}

void Data::setValue(int val)
{
    qDebug() << this << "val" << val << endl;
    if(m_val != val){
        m_val = val;
        emit valueChanged(val);
    }
}

