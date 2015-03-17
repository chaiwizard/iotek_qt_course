#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   QLabel label("hello qt!");
   label.show();

   return app.exec();
}
