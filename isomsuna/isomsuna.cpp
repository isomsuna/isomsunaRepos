#include "isomsuna.h"
#include "ui_isomsuna.h"

isomsuna::isomsuna(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::isomsuna)
{
    ui->setupUi(this);
}

isomsuna::~isomsuna()
{
    delete ui;
}
