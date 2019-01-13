#include "widget.h"
#include "ui_widget.h"
#include "mydialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    MyDialog * dlg = new MyDialog(this);
    connect(dlg,SIGNAL(dlgReturn(int)),this,SLOT(showValue(int)));
    dlg->show();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::showValue(int value)
{
    QString str = tr("获取的值是:").append(QString::number(value));
    ui->label->setText(str);
   // ui->label->setText(tr("获取的值是：").append(QString::number(value)));
   // ui->label->setText(tr("获取的值是：").arg(QString::number(value)));
   // ui->label->show();
}
