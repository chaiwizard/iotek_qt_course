#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton button("Click me");

    QObject::connect(&button,SIGNAL(clicked()),
                     qApp,SLOT(quit()));

    button.show();
    return app.exec();
}
