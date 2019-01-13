/********************************************************************************
** Form generated from reading UI file 'helloworld.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_HelloWorld
{
public:

    void setupUi(QDialog *HelloWorld)
    {
        if (HelloWorld->objectName().isEmpty())
            HelloWorld->setObjectName(QStringLiteral("HelloWorld"));
        HelloWorld->resize(400, 300);

        retranslateUi(HelloWorld);

        QMetaObject::connectSlotsByName(HelloWorld);
    } // setupUi

    void retranslateUi(QDialog *HelloWorld)
    {
        HelloWorld->setWindowTitle(QApplication::translate("HelloWorld", "HelloWorld", 0));
    } // retranslateUi

};

namespace Ui {
    class HelloWorld: public Ui_HelloWorld {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
