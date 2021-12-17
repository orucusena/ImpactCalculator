#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "startpage.h"
#include "aboutpage.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix ("//Users//orucusena//Desktop//Daco_4306360.png");
    ui->label_2-> setPixmap(pix.scaled(120,120));
    ui->label_4-> setPixmap(pix.scaled(120,120));

    QPixmap pix2("//Users//orucusena//Desktop//enviroment.png");
    ui->label_3-> setPixmap(pix2.scaled(950,300));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

        StartPage start;
        start.setModal(true);
        start.exec();

}


void MainWindow::on_pushButton_2_clicked()
{
    AboutPage about;
    about.setModal(true);
    about.exec();
}

