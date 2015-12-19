#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication prog(argc, argv);
    Widget w;
    w.show();

    return prog.exec();
}
