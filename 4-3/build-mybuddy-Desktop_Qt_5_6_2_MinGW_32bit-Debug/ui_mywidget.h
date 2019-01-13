/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(400, 300);
        label = new QLabel(MyWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(33, 50, 81, 20));
        label_2 = new QLabel(MyWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(33, 110, 81, 20));
        label_3 = new QLabel(MyWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(33, 80, 81, 20));
        label_4 = new QLabel(MyWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(33, 140, 81, 20));
        pushButton = new QPushButton(MyWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 50, 75, 23));
        checkBox = new QCheckBox(MyWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(160, 90, 71, 16));
        lineEdit = new QLineEdit(MyWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 110, 113, 20));
        spinBox = new QSpinBox(MyWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(160, 140, 42, 22));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(pushButton);
        label_2->setBuddy(lineEdit);
        label_3->setBuddy(checkBox);
        label_4->setBuddy(spinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(pushButton, lineEdit);
        QWidget::setTabOrder(lineEdit, checkBox);
        QWidget::setTabOrder(checkBox, spinBox);

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        label->setText(QApplication::translate("MyWidget", "&Button", 0));
        label_2->setText(QApplication::translate("MyWidget", "\350\241\214\347\274\226\350\276\221\345\231\250\357\274\210&L)", 0));
        label_3->setText(QApplication::translate("MyWidget", "&CheckBox", 0));
        label_4->setText(QApplication::translate("MyWidget", "\346\225\260\345\255\227\351\200\211\346\213\251\346\241\206(&N)", 0));
        pushButton->setText(QApplication::translate("MyWidget", "PushButton", 0));
        checkBox->setText(QApplication::translate("MyWidget", "CheckBox", 0));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
