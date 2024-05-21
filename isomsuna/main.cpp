#include "isomsuna.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    isomsuna w;
    w.show();
    return a.exec();
}
