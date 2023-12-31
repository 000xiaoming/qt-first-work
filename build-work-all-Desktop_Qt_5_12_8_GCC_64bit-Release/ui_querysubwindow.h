/********************************************************************************
** Form generated from reading UI file 'querysubwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSUBWINDOW_H
#define UI_QUERYSUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuerySubWindow
{
public:
    QTextBrowser *textBrowser;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *QuerySubWindow)
    {
        if (QuerySubWindow->objectName().isEmpty())
            QuerySubWindow->setObjectName(QString::fromUtf8("QuerySubWindow"));
        QuerySubWindow->resize(1190, 515);
        textBrowser = new QTextBrowser(QuerySubWindow);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 141, 1161, 351));
        label = new QLabel(QuerySubWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 311, 32));
        lineEdit = new QLineEdit(QuerySubWindow);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 70, 741, 40));
        pushButton = new QPushButton(QuerySubWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(780, 70, 151, 46));

        retranslateUi(QuerySubWindow);

        QMetaObject::connectSlotsByName(QuerySubWindow);
    } // setupUi

    void retranslateUi(QWidget *QuerySubWindow)
    {
        QuerySubWindow->setWindowTitle(QApplication::translate("QuerySubWindow", "Form", nullptr));
        label->setText(QApplication::translate("QuerySubWindow", "Input your expression!", nullptr));
        pushButton->setText(QApplication::translate("QuerySubWindow", "Let's try!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuerySubWindow: public Ui_QuerySubWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSUBWINDOW_H
