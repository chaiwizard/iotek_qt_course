#include <QtCore/QCoreApplication>

#include <QString>
#include <QDebug>
#include "data.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    qDebug() << "Hello Wolrd" << endl;

    Data a(10);
    Data b(9);

    QObject::connect(&a,SIGNAL(valueChanged(int)),
                     &b,SLOT(setValue(int)));

    QObject::connect(&b,SIGNAL(valueChanged(int)),
                     &a,SLOT(setValue(int)));

    a.setValue(11);
    qDebug() << "a.getValue:" << a.getValue() << endl;
    qDebug() << "b.getValue:" << b.getValue() << endl;

    return app.exec();
}
