#include "monkeybyte.h"
#include "ui_monkeybyte.h"

MonkeyByte::MonkeyByte(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MonkeyByte)
{
    ui->setupUi(this);
}

MonkeyByte::~MonkeyByte()
{
    delete ui;
}
