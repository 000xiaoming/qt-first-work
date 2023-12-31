#include "examplesubwindow.h"
#include "ui_examplesubwindow.h"

ExampleSubWindow::ExampleSubWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExampleSubWindow)
{
    ui->setupUi(this);
}

ExampleSubWindow::~ExampleSubWindow()
{
    delete ui;
}
