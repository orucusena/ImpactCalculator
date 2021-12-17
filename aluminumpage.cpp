#include "aluminumpage.h"
#include "ui_aluminumpage.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "startpage.h"
#include <QDebug>

AluminumPage::AluminumPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AluminumPage)
{

    ui->setupUi(this);

    QFile file(":/StartPage/Aluminum.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());



}




AluminumPage::~AluminumPage()
{

    delete ui;
}



void AluminumPage::on_pushButton_clicked()
{
    StartPage start;
    start.setModal(true);
    start.exec();
}

