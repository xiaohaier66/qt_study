#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject * parent = 0);
    void stop();
protected:
    void run();
private:
    volatile bool stopped;
    volatile bool finished;
signals:
    void show_data(int n);
private slots:
    void doNext();

};

#endif // MYTHREAD_H
