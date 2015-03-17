#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QLabel;
class QPushButton;

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent=0);
    ~Widget();

signals:
    void buttonClicked();
private slots:
    void doSomething();

private:
    QLabel *label;
    QPushButton *button;
};

#endif // WIDGET_H
