#ifndef SERIAL_READ_H
#define SERIAL_READ_H

#include <QWidget>

class mainwindow;

class serial_read : public QWidget
{ Q_OBJECT mainwindow *mymainwindow;

public:
    serial_read(mainwindow*);
    ~serial_read();
private slots:

};

#endif // SERIAL_READ_H
