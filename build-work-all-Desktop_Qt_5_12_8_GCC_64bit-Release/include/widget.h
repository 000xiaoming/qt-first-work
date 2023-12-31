#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "querysubwindow.h"
#include "examplesubwindow.h"
#include <QTextBrowser>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QtSql>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonGo_clicked();

    void on_pushButtonExamples_clicked();

private:
    Ui::Widget *ui;

};
#endif // WIDGET_H
