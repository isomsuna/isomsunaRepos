#ifndef ISOMSUNA_H
#define ISOMSUNA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class isomsuna;
}
QT_END_NAMESPACE

class isomsuna : public QMainWindow
{
    Q_OBJECT

public:
    isomsuna(QWidget *parent = nullptr);
    ~isomsuna();

private:
    Ui::isomsuna *ui;
};
#endif // ISOMSUNA_H
