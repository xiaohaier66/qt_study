#include "mythread.h"

MyThread::MyThread(QObject *parent):
    QThread (parent)
{
    stopped = false;
    finished = false;
}

void MyThread::stop()
{
    stopped = true;
}

void MyThread::run()
{
    qreal i=0;
    while(!stopped){
        i++;
        emit show_data(i);
        while(!finished);
        finished = false;
    }
    stopped = false;
}

void MyThread::doNext()
{
    finished = true;
}
