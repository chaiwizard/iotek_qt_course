#ifndef ECHOPLUGIN_H
#define ECHOPLUGIN_H

#include <QObject>
#include "echointerface.h"

class Plugin : public QObject, EchoInterface
{
    Q_OBJECT
    Q_INTERFACES(EchoInterface)

public:
    Plugin();
    ~Plugin();

public:
    QString echo(const QString &message);

};

#endif // ECHOPLUGIN_H
