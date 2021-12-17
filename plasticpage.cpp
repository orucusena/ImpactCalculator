#include "plasticpage.h"
#include "ui_plasticpage.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "startpage.h"

PlasticPage::PlasticPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlasticPage)
{
    ui->setupUi(this);

    QFile file(":/StartPage/Plastic.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

PlasticPage::~PlasticPage()
{
    delete ui;
}

void PlasticPage::on_pushButton_clicked()
{
    StartPage start;
    start.setModal(true);
    start.exec();
}

