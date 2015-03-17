#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QLabel;

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent=0);
    ~Widget();
public slots:
    void working();
private:
    QLabel *label;
};


#endif // WIDGET_H
