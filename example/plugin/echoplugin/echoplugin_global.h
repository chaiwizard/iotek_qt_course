#ifndef ECHOPLUGIN_GLOBAL_H
#define ECHOPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ECHOPLUGIN_LIBRARY)
#  define ECHOPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ECHOPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ECHOPLUGIN_GLOBAL_H