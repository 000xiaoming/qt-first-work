/********************************************************************************
** Form generated from reading UI file 'examplesubwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMPLESUBWINDOW_H
#define UI_EXAMPLESUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExampleSubWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QWidget *ExampleSubWindow)
    {
        if (ExampleSubWindow->objectName().isEmpty())
            ExampleSubWindow->setObjectName(QString::fromUtf8("ExampleSubWindow"));
        ExampleSubWindow->resize(973, 477);
        label = new QLabel(ExampleSubWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 320, 581, 32));
        label_2 = new QLabel(ExampleSubWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 370, 741, 32));
        label_3 = new QLabel(ExampleSubWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 30, 731, 32));
        label_4 = new QLabel(ExampleSubWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 70, 701, 32));
        label_5 = new QLabel(ExampleSubWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 130, 120, 32));
        label_6 = new QLabel(ExampleSubWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 130, 321, 32));
        label_7 = new QLabel(ExampleSubWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 170, 51, 32));
        label_8 = new QLabel(ExampleSubWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(160, 170, 411, 32));
        label_9 = new QLabel(ExampleSubWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 210, 581, 32));
        label_10 = new QLabel(ExampleSubWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(490, 210, 461, 32));
        label_11 = new QLabel(ExampleSubWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 260, 891, 32));
        label_12 = new QLabel(ExampleSubWindow);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 420, 901, 32));

        retranslateUi(ExampleSubWindow);

        QMetaObject::connectSlotsByName(ExampleSubWindow);
    } // setupUi

    void retranslateUi(QWidget *ExampleSubWindow)
    {
        ExampleSubWindow->setWindowTitle(QApplication::translate("ExampleSubWindow", "Form", nullptr));
        label->setText(QApplication::translate("ExampleSubWindow", "In this application,you can do what you want", nullptr));
        label_2->setText(QApplication::translate("ExampleSubWindow", "You can even use SQLi technology to destroy my database", nullptr));
        label_3->setText(QApplication::translate("ExampleSubWindow", "In the input interface, you need to first input the regular", nullptr));
        label_4->setText(QApplication::translate("ExampleSubWindow", "expression of MySQL, and then click the Let's try button", nullptr));
        label_5->setText(QApplication::translate("ExampleSubWindow", "Such as:", nullptr));
        label_6->setText(QApplication::translate("ExampleSubWindow", "SELECT * FROM patients;", nullptr));
        label_7->setText(QApplication::translate("ExampleSubWindow", "or:", nullptr));
        label_8->setText(QApplication::translate("ExampleSubWindow", "SELECT * FROM measurements;", nullptr));
        label_9->setText(QApplication::translate("ExampleSubWindow", "You can insert into tables by yourself:", nullptr));
        label_10->setText(QApplication::translate("ExampleSubWindow", "INSERT INTO ...(...) VALUES ...;", nullptr));
        label_11->setText(QApplication::translate("ExampleSubWindow", "Note that you need a semicolon(\";\") at the end of your input ", nullptr));
        label_12->setText(QApplication::translate("ExampleSubWindow", "But i don't care.Because i have dozens of Docker containers like this", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExampleSubWindow: public Ui_ExampleSubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMPLESUBWINDOW_H
