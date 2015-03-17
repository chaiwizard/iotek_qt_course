#include <QtCore/QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString str = "hello";
    str += " world!";

    QString msg = QString("val=%1,%2").arg(10).arg(100);

    qDebug() << "str=" << str << endl;
    qDebug() << "msg=" << msg << endl;

    return a.exec();
}
