#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qint16 n1 = ui->textEdit->toPlainText().toInt();
    qint16 n2 = ui->textEdit_2->toPlainText().toInt();
    qint16 resultadd=n1+n2;
    QString res = QString::number(resultadd);
    ui->label_3->setText(res);
}

void MainWindow::on_pushButton_2_clicked()
{
    qint16 n1 = ui->textEdit->toPlainText().toInt();
    qint16 n2 = ui->textEdit_2->toPlainText().toInt();
    qint16 resultadd=n1-n2;
    QString res = QString::number(resultadd);
    ui->label_3->setText(res);
}

void MainWindow::on_pushButton_3_clicked()
{
    qint16 n1 = ui->textEdit->toPlainText().toInt();
    qint16 n2 = ui->textEdit_2->toPlainText().toInt();
    qint16 resultadd=n1*n2;
    QString res = QString::number(resultadd);
    ui->label_3->setText(res);
}

void MainWindow::on_pushButton_4_clicked()
{
    qint16 n1 = ui->textEdit->toPlainText().toInt();
    qint16 n2 = ui->textEdit_2->toPlainText().toInt();
    qint16 resultadd=n1/n2;
    QString res = QString::number(resultadd);
    ui->label_3->setText(res);
}
