#ifndef EXAMPLESUBWINDOW_H
#define EXAMPLESUBWINDOW_H

#include <QWidget>

namespace Ui {
class ExampleSubWindow;
}

class ExampleSubWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ExampleSubWindow(QWidget *parent = nullptr);
    ~ExampleSubWindow();

private:
    Ui::ExampleSubWindow *ui;
};

#endif // EXAMPLESUBWINDOW_H
