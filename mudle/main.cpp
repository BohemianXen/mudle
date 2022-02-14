
#include <QtWidgets/QApplication>
#include "mudle.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    mudle mainWindow;
    mainWindow.show();
    return app.exec();
}
