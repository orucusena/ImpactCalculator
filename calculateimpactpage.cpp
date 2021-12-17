#include "calculateimpactpage.h"
#include "ui_calculateimpactpage.h"
#include "impactpage.h"
#include "startpage.h"
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QFile>
#include <QCoreApplication>


CalculateImpactPage::CalculateImpactPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalculateImpactPage)
{
    ui->setupUi(this);

    QPixmap pix6("//Users//orucusena//Desktop//3.png");
    ui->label_6-> setPixmap(pix6.scaled(250,250));

    QPixmap pix7("//Users//orucusena//Desktop//1.png");
    ui->label_7-> setPixmap(pix7.scaled(250,250));

    QPixmap pix9("//Users//orucusena//Desktop//2.png");
    ui->label_9-> setPixmap(pix9.scaled(250,250));


}

CalculateImpactPage::~CalculateImpactPage()
{
    delete ui;
}


void CalculateImpactPage::ListOfProducts()
{
    //decleration of the spinBox_aluminum input
    QString aluminum;
    aluminum=ui->spinBox_aluminum->text();
     a = aluminum.toInt();

    //decleration of the spinBox_paper input
    QString paper;
    paper=ui->spinBox_paper->text();
     b = paper.toInt();

    //decleration of the spinBox_pet input
    QString pet;
    pet=ui->spinBox_pet->text();
     c = pet.toInt();

    //decleration of the spinBox_wbottle input
    QString wbottle;
    wbottle=ui->spinBox_wbottle->text();
     d = wbottle.toInt();

    //decleration of the spinBox_aluminiumother input
    QString aluminiumother;
    aluminiumother=ui->spinBox_aluminiumother->text();
     e = aluminiumother.toInt();

    //decleration of the spinBox_glasscontainers input
    QString glasscontainers;
    glasscontainers=ui->spinBox_glasscontainers->text();
     f = glasscontainers.toInt();

    //decleration of the spinBox_hdpe input
    QString hdpe;
    hdpe=ui->spinBox_hdpe->text();
     g = hdpe.toInt();

    //decleration of the spinBox_mplastics input
    QString mplastics;
    mplastics=ui->spinBox_mplastics->text();
     i = mplastics.toInt();

    //decleration of the spinBox_npaper input
    QString npaper;
    npaper=ui->spinBox_npaper->text();
     k = npaper.toInt();

    //decleration of the spinBox_opaper input
    QString opaper;
    opaper=ui->spinBox_opaper->text();
     l = opaper.toInt();

    //decleration of the spinBox_pvs input
    QString pvs;
    pvs=ui->spinBox_pvs->text();
     m = pvs.toInt();

    //decleration of the spinBox_steel input
    QString steel;
    steel=ui->spinBox_steel->text();
     n = steel.toInt();

    //decleration of the spinBox_steelother input
    QString steelother;
    steelother=ui->spinBox_steelother->text();
     o = steelother.toInt();


    //test to see if right input's stored
    int array[14]={a,b,c,d,e,f,g,i,k,l,m,n,o};
    for (int j = 0; j < 13; ++j)
    {
        qDebug() << array[j] << " ";
}
}


void CalculateImpactPage::Calculation()
{
    ListOfProducts();

    P_aluminum = a*264;
    E_aluminum = a*805;
    W_aluminum = a*3;


    P_paper = b*94.5;
    E_paper = b*448;
    W_paper = b*4.2;

    P_pet = c*59;
    E_pet = c*770;
    W_pet = c*0;

    P_wbottle = d*82.8;
    E_wbottle = d*0;
    W_wbottle = d*0;

    P_aluminiumother = e*181;
    E_aluminiumother = e*530;
    W_aluminiumother = e*2;

    P_glasscontainers = f*139.5;
    E_glasscontainers = f*428;
    W_glasscontainers = f*0.5;

    P_hdpe = g*54;
    E_hdpe = g*804;
    W_hdpe = g*0;

    P_mplastics = i*7.95;
    E_mplastics = i*874;
    W_mplastics = i*0;

    P_npaper = k*29.12;
    E_npaper = k*50;
    W_npaper = k*0.3;

    P_opaper = l*20.1;
    E_opaper = l*21.9;
    W_opaper = l*0.01;

    P_pvs = m*97.5;
    E_pvs = m*679;
    W_pvs = m*0.06;

    P_steel = n*0.66;
    E_steel = n*32;
    W_paper = n*0;

    P_steelother = o*0.44;
    E_steelother = o*22;
    W_steelother = o*0;


    PollutionAvoided = P_paper + P_aluminum + P_pet + P_wbottle + P_aluminiumother + P_glasscontainers + P_hdpe + P_mplastics + P_npaper + P_opaper + P_pvs + P_steel + P_steelother;
    EnergySavings    = E_paper + E_aluminum + E_pet + E_wbottle + E_aluminiumother + E_glasscontainers + E_hdpe + E_mplastics + E_npaper + E_opaper + E_pvs + E_steel + E_steelother;
    WaterSavings     = W_paper + W_aluminum + W_pet + W_wbottle + W_aluminiumother + W_glasscontainers + W_hdpe + W_mplastics + W_npaper + W_opaper + W_pvs + W_steel + W_steelother ;



}

void CalculateImpactPage::on_pushButton_continue_clicked()
{


  Calculation();
  ui->textBrowser_carbon-> setText("Grams of carbon pollution avoided:  " + QString::number(PollutionAvoided));
  ui->textBrowser_water->  setText("Liters of water saved:              " + QString::number(WaterSavings));
  ui->textBrowser_energy-> setText("Watt Hours of energy saved:         " + QString::number(EnergySavings));
}





void CalculateImpactPage::on_pushButton_clicked()
{
    StartPage start;
    start.setModal(true);
    start.exec();
}

