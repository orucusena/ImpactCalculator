#include "paperpage.h"
#include "ui_paperpage.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "startpage.h"

PaperPage::PaperPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PaperPage)
{
    ui->setupUi(this);

    QFile file(":/StartPage/Paper.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

PaperPage::~PaperPage()
{
    delete ui;
}

void PaperPage::on_pushButton_clicked()
{
    StartPage start;
    start.setModal(true);
    start.exec();
}

