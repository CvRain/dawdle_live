#include <QApplication>

#include "application/application.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Application application{app};
    application.showTrayIcon();

    return QApplication::exec();
}