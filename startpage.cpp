#include "startpage.h"
#include "ui_startpage.h"
#include "aluminumpage.h"
#include "plasticpage.h"
#include "paperpage.h"
#include "glasspage.h"
#include "calculateimpactpage.h"

StartPage::StartPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StartPage)
{
    ui->setupUi(this);
}

StartPage::~StartPage()
{
    delete ui;
}

void StartPage::on_pushButton_aluminum_clicked()
{
    AluminumPage aluminum;
    aluminum.setModal(true);
    aluminum.exec();
}

void StartPage::on_pushButton_plastic_clicked()
{
    PlasticPage plastic;
    plastic.setModal(true);
    plastic.exec();
}


void StartPage::on_pushButton_paper_clicked()
{
    PaperPage paper;
    paper.setModal(true);
    paper.exec();
}


void StartPage::on_pushButton_glass_clicked()
{
    GlassPage glass;
    glass.setModal(true);
    glass.exec();
}



void StartPage::on_pushButton_impact_clicked()
{
    CalculateImpactPage calIm;
    calIm.setModal(true);
    calIm.exec();
}

