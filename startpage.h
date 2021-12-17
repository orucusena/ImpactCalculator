#ifndef STARTPAGE_H
#define STARTPAGE_H

#include <QDialog>

namespace Ui {
class StartPage;
}

class StartPage : public QDialog
{
    Q_OBJECT

public:
    explicit StartPage(QWidget *parent = nullptr);
    ~StartPage();

private slots:
    void on_pushButton_aluminum_clicked();

    void on_pushButton_plastic_clicked();

    void on_pushButton_paper_clicked();

    void on_pushButton_glass_clicked();


    void on_pushButton_impact_clicked();

private:
    Ui::StartPage *ui;
};

#endif // STARTPAGE_H
