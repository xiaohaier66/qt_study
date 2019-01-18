#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(&mythread,SIGNAL(show_data(int)),this,SLOT(showValue(int)));
    connect(this,SIGNAL(finish_run()),&mythread,SLOT(doNext()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_start_clicked()
{
    mythread.start();
    ui->pushButton_start->setEnabled(false);
    ui->pushButton_stop->setEnabled(true);
}

void Dialog::on_pushButton_stop_clicked()
{
    mythread.stop();
    ui->pushButton_stop->setEnabled(false);
    ui->pushButton_start->setEnabled(true);
}

void Dialog::showValue(int value)
{
    ui->label->setText(QString::number(value));
    emit finish_run();
}
