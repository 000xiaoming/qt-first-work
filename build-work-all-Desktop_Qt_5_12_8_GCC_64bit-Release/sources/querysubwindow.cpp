#include "querysubwindow.h"
#include "ui_querysubwindow.h"

QuerySubWindow::QuerySubWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuerySubWindow)
{
    ui->setupUi(this);
}

QuerySubWindow::~QuerySubWindow()
{
    delete ui;
}

void QuerySubWindow::on_pushButton_clicked()
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("DRIVER={MYSQL ODBC 8.0 Driver};SERVER=47.93.187.119;DATABASE=work;UID=root;PWD=123456;PORT=3306");

    if(!db.open())
    {
        qDebug() << "Error: Unable to connect to the database";
        qDebug() << "Error:" << db.lastError().text();
        return ;
    }

    QSqlQuery query(db);
    QString input = ui->lineEdit->text();
    qDebug() << input;
    query.prepare(input);
    if(!query.exec())
    {
        qDebug() << "Error: Failed to execute query";

        db.close();
        return;
    }

    ui->textBrowser->clear();


    QString data;
    data += "Succeed!";
     ui->textBrowser->append(data);
     data = "\0";
    int tt = 0;

    while(query.next())
    {
        if(tt==0)
        {
                if(input.contains("patients"))
                {
                    data +="work database! patients table!\n\n";
                    data +="patient_id\t\tname\t\tage\t\tgender\n";
                }
                else
                {
                    data +="work database! measurements table!\n\n";
                    data +="measere_id\t\tpatient_id\t\tvalue\t\ttype\t\ttime\t\tcheck_id\n";
                }
                tt++;
        }
        for(int i = 0; i < query.record().count(); ++i)
        {
            data += query.value(i).toString() + "\t\t";
        }
        data += "\n";
        ui->textBrowser->append(data);
        data = "\0";
    }
    db.close();
}
