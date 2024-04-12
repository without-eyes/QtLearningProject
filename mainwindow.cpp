#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btnAdd_clicked()
{
    int firstNum = ui->txtFirstNum->text().toInt();
    int secondNum = ui->txtSecondNum->text().toInt();
    int result = firstNum + secondNum;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnSubtract_clicked()
{
    int firstNum = ui->txtFirstNum->text().toInt();
    int secondNum = ui->txtSecondNum->text().toInt();
    int result = firstNum - secondNum;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnDivide_clicked()
{
    int firstNum = ui->txtFirstNum->text().toInt();
    int secondNum = ui->txtSecondNum->text().toInt();
    int result = firstNum / secondNum;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnMultiply_clicked()
{
    int firstNum = ui->txtFirstNum->text().toInt();
    int secondNum = ui->txtSecondNum->text().toInt();
    int result = firstNum * secondNum;
    ui->txtResult->setText(QString::number(result));
}

