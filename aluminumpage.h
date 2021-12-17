#ifndef ALUMINUMPAGE_H
#define ALUMINUMPAGE_H

#include <QDialog>

namespace Ui {
class AluminumPage;
}

class AluminumPage : public QDialog
{
    Q_OBJECT

public:
    explicit AluminumPage(QWidget *parent = nullptr);
    ~AluminumPage();


private slots:
    void on_pushButton_clicked();

private:
    Ui::AluminumPage *ui;
};

#endif // ALUMINUMPAGE_H
