#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "singin.h"
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


void MainWindow::on_pushButton_clicked()
{
    hide() ;
    SingIn sign ;
    sign.setModal(true) ;
    sign.exec() ;
}
