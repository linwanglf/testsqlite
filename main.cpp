#include "testsqlite.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::addLibraryPath("plugins");
    QApplication a(argc, argv);
    TestSqlite w;
    w.show();

    return a.exec();
}
