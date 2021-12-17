#include "glasspage.h"
#include "ui_glasspage.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "startpage.h"

GlassPage::GlassPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GlassPage)
{
    ui->setupUi(this);

    QFile file(":/StartPage/Glass.txt");
    if(!file.open(QIODevice::ReadOnly))
    QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

GlassPage::~GlassPage()
{
    delete ui;
}

void GlassPage::on_pushButton_clicked()
{
    StartPage start;
    start.setModal(true);
    start.exec();
}

