#include "impactpage.h"
#include "ui_impactpage.h"
#include "calculateimpactpage.h"

ImpactPage::ImpactPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImpactPage)
{
    ui->setupUi(this);

  ui->textBrowser_impact->setText("stg");
}

ImpactPage::~ImpactPage()
{
    delete ui;
}
