#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QDialog>

namespace Ui {
class HelloWorld;
}

class HelloWorld : public QDialog
{
    Q_OBJECT

public:
    explicit HelloWorld(QWidget *parent = nullptr);
    ~HelloWorld();

private:
    Ui::HelloWorld *ui;
};

#endif // HELLOWORLD_H
