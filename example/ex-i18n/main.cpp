#include <QApplication>
#include <QTranslator>

#include "widget.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

    QTranslator translator;
    translator.load("ex-i18n.qm",":/");
    app.installTranslator(&translator);


	Widget widget;
	widget.show();

	return app.exec();
}
