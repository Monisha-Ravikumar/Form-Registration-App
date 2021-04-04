#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QValidator>
#include <QLineEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox->isChecked())
    {
        stream<<"English selected"<<endl;

    }
    else
    {
        stream<<"Not selected"<<endl;
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_2->isChecked())
    {
        stream<<"Tamil selected"<<endl;

    }
    else
    {
        stream<<"Not selected"<<endl;
    }
}

void MainWindow::on_checkBox_3_clicked()
{
    QTextStream stream(stdout);
    if(ui->checkBox_3->isChecked())
    {
        stream<<"Telugu selected"<<endl;

    }
    else
    {
        stream<<"Not selected"<<endl;
    }
}


void MainWindow::on_pushButton_clicked()
{
     QMessageBox::information(this,"Monisha.R 212218104112","Successfully Submitted!!!");
}

void MainWindow::on_lineEdit_2_returnPressed()
{
    if(ui->lineEdit_2->text().length()>20)
               QMessageBox::information(this,"Monisha.R 212218104112","Size exceed!");
}


void MainWindow::on_lineEdit_3_returnPressed()
{
    QRegularExpression re("^[a-zA-Z0-9+_.-]+@[a-zA-Z0-9.-]+$");
        QRegularExpressionMatch match = re.match(ui->lineEdit_3->text());
        bool hasMatch = match.hasMatch();
        if (!hasMatch)
        {
           QMessageBox::information(this,"Monisha.R 212218104112","Invalid Format");
        }
}
