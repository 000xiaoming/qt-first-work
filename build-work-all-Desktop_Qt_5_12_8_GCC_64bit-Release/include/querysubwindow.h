#ifndef QUERYSUBWINDOW_H
#define QUERYSUBWINDOW_H

#include <QWidget>
#include <QTextBrowser>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QtSql>
namespace Ui {
class QuerySubWindow;
}

class QuerySubWindow : public QWidget
{
    Q_OBJECT

public:
    explicit QuerySubWindow(QWidget *parent = nullptr);
    ~QuerySubWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::QuerySubWindow *ui;
    QSqlDatabase db;
};

#endif // QUERYSUBWINDOW_H
