#include <QtGui/QApplication>
#include "monkeybyte.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MonkeyByte w;
    w.show();

    return a.exec();
}
