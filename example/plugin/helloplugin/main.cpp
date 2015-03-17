#include <QApplication>
#include <QDir>
#include <QPluginLoader>
#include <QLabel>
#include <QDebug>

#include "echoplugin.h"


static void loadPlugin()
{
    QDir pluginsDir(qApp->applicationDirPath() + "/plugins");
    foreach (QString filename, pluginsDir.entryList(QDir::Files))
    {
        qDebug() << filename << endl;
        QPluginLoader pluginLoader(pluginsDir.absoluteFilePath(filename));
        qDebug() << pluginsDir.absoluteFilePath(filename) << endl;

        QObject *plugin = pluginLoader.instance();
        if(plugin){
           EchoInterface *interface = qobject_cast<EchoInterface *>(plugin);
           qDebug() << "echo:" << interface->echo("Hello plugin") << endl;
       }
    }

}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    loadPlugin();
    QLabel label("hello");
    label.show();
    return app.exec();
}
