#include <QtCore/QCoreApplication>
#include <QDebug>

#include <cstdio>
#include <string>
#include <iostream>


void func(const char * str)
{
	printf("str=%s\n",str);
}

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    QString str("hello");
    str += " world!";

    QString msg = QString("val=%1,%2").arg(9.5).arg(100);
	std::string str_msg = msg.toStdString();
	std::cout << str_msg << std::endl;
	func(str_msg.c_str());

    qDebug() << "str=" << str << endl;
    qDebug() << "msg=" << msg << endl;

    //return a.exec();

	return 0;
}
