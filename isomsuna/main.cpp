#include "isomsuna.h"

#include <QApplication>

#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    isomsuna w;
    w.show();
    qDebug() << "Joanna is beautiful";
    return a.exec();
}
