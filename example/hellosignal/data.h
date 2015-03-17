#ifndef DATA_H
#define DATA_H

#include <QObject>

class Data : public QObject
{
    Q_OBJECT
public:
    Data(int val = 0);
    ~Data();

signals://public
    void valueChanged(int);

public slots:
    void setValue(int val);

public:
    int getValue() const;

private:
    int m_val;
};

#endif // DATA_H
