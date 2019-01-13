#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mybutton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString str = ui->pushButton->getName();
    ui->pushButton->setText(str);
}

MainWindow::~MainWindow()
{
    delete ui;
}
