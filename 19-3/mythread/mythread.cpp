#include "mythread.h"
#include <QDebug>

MyThread::MyThread(QObject *parent):
    QThread (parent)
{
    stopped  = false;
}

void MyThread::stop()
{
    stopped = true;
}

void MyThread::run()
{
    qreal i = 0;
    while(!stopped){
        qDebug()<<QString("in MyThread: % 1").arg(i);
        i++;
    }
    stopped = false;
}
