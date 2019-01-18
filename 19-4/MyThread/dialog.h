#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "mythread.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_start_clicked();

    void on_pushButton_stop_clicked();

private:
    Ui::Dialog *ui;
    MyThread mythread;
public slots:
    void showValue(int value);
signals:
    void finish_run();
};

#endif // DIALOG_H
