#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::on_pushButtonGo_clicked()
{
    QuerySubWindow *querySubWindow = new QuerySubWindow(NULL);
    querySubWindow->setWindowModality(Qt::ApplicationModal);
    querySubWindow->raise();
    querySubWindow->show();

}

void Widget::on_pushButtonExamples_clicked()
{
    ExampleSubWindow *exampleSubWindow = new ExampleSubWindow(NULL);
    exampleSubWindow->setWindowModality(Qt::ApplicationModal);
    exampleSubWindow->raise();
    exampleSubWindow->show();
}
