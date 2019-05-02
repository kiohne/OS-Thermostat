#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>
#include <QtSerialPort/QSerialPort>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MainWindow w;
    w.show();



    return a.exec();
}
