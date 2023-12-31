/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButtonGo;
    QLabel *label_6;
    QPushButton *pushButtonExamples;
    QLabel *label_7;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 50, 351, 32));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 50, 271, 32));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 100, 471, 32));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 150, 661, 32));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 210, 351, 32));
        pushButtonGo = new QPushButton(Widget);
        pushButtonGo->setObjectName(QString::fromUtf8("pushButtonGo"));
        pushButtonGo->setGeometry(QRect(310, 340, 159, 46));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 280, 521, 32));
        pushButtonExamples = new QPushButton(Widget);
        pushButtonExamples->setObjectName(QString::fromUtf8("pushButtonExamples"));
        pushButtonExamples->setGeometry(QRect(390, 520, 159, 46));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 470, 571, 32));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "Add/Delete/Change/Query", nullptr));
        label_2->setText(QApplication::translate("Widget", "Here meet all needs!", nullptr));
        label_3->setText(QApplication::translate("Widget", "But,", nullptr));
        label_4->setText(QApplication::translate("Widget", "this does not guarantee the correctness of your input", nullptr));
        label_5->setText(QApplication::translate("Widget", "So,please use with caution!", nullptr));
        pushButtonGo->setText(QApplication::translate("Widget", "Go!", nullptr));
        label_6->setText(QApplication::translate("Widget", "Please enter a MySQL regular expression:", nullptr));
        pushButtonExamples->setText(QApplication::translate("Widget", "Examples!", nullptr));
        label_7->setText(QApplication::translate("Widget", "How should i input ? please click this button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
