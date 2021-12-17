#ifndef PLASTICPAGE_H
#define PLASTICPAGE_H

#include <QDialog>

namespace Ui {
class PlasticPage;
}

class PlasticPage : public QDialog
{
    Q_OBJECT

public:
    explicit PlasticPage(QWidget *parent = nullptr);
    ~PlasticPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PlasticPage *ui;
};

#endif // PLASTICPAGE_H
