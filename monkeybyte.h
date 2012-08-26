#ifndef MONKEYBYTE_H
#define MONKEYBYTE_H

#include <QMainWindow>

namespace Ui {
    class MonkeyByte;
}

class MonkeyByte : public QMainWindow
{
    Q_OBJECT

public:
    explicit MonkeyByte(QWidget *parent = 0);
    ~MonkeyByte();

private:
    Ui::MonkeyByte *ui;
};

#endif // MONKEYBYTE_H
