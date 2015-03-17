#include "echoplugin.h"
#include <QtPlugin>


Plugin::Plugin()
{

}

Plugin::~Plugin()
{

}

QString Plugin::echo(const QString &message)
{
 return message + " echo message";
}

Q_EXPORT_PLUGIN2("EchoPlugin", Plugin);
