#ifndef PAPERPAGE_H
#define PAPERPAGE_H

#include <QDialog>

namespace Ui {
class PaperPage;
}

class PaperPage : public QDialog
{
    Q_OBJECT

public:
    explicit PaperPage(QWidget *parent = nullptr);
    ~PaperPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PaperPage *ui;
};

#endif // PAPERPAGE_H
