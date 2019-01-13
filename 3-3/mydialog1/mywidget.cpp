#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDialog>
#include <QWidget>
#include <qpushbutton.h>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
   // QDialog *dialog =  new QDialog(this);
    //dialog->show();
    connect(ui->showChildButton,&QPushButton::clicked,
            this,&MyWidget::showChildDialog);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::showChildDialog()
{
    QDialog *dialog = new QDialog(this);
    dialog->show();
}
