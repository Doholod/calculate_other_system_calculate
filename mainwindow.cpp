#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QIntValidator"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(-1e9,1e9,this));
    ui->lineEdit_2->setValidator(new QIntValidator(1,10,this));
}

MainWindow::~MainWindow()
{
    delete ui;
}
