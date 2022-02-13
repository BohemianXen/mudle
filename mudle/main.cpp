
#include <stdint.h>
#include <QtWidgets/QApplication>
#include "mudle.h"

int32_t main(int32_t argc, char *argv[])
{
    QApplication app(argc, argv);
    mudle mainWindow;
    mainWindow.show();
    return app.exec();
}
