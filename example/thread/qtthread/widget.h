#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QLabel;
class QPushButton;
class QThread;

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = 0);
public slots:
    void buttonClicked();
    void calFinished();


private:
    QLabel *label;
    QPushButton *button;
    QThread *workThread;
};

#endif // WIDGET_H
