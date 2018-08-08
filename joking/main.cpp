#include "widget.h"
#include <QApplication>
#include "mydialog.h"
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Widget w;
    //w.setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);
    w.show();


    return a.exec();
}
