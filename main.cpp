#include "mainwindow.h"
#include"dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Dialog d;
    d.show();
    //w.show();
    return a.exec();
}
