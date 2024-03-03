#include "main_window.hpp"

#include <QtWidgets/QApplication>

#if defined(QT_DEBUG) && defined(_WIN32)
#include <Windows.h>
#endif

int main(int argc, char *argv[])
{
#if defined(QT_DEBUG) && defined(_WIN32)
    if (AttachConsole(ATTACH_PARENT_PROCESS) || AllocConsole()) {
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);
        freopen("CONIN$", "r", stdin);
    }
#endif

    QApplication a(argc, argv);
    bh::MainWindow w;
    w.show();
    return a.exec();
}
