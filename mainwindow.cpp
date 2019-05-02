#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "serial_read.h"
#include "serial_write.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serial_read *readWidget = new serial_read(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
