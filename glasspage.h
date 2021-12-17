#ifndef GLASSPAGE_H
#define GLASSPAGE_H

#include <QDialog>

namespace Ui {
class GlassPage;
}

class GlassPage : public QDialog
{
    Q_OBJECT

public:
    explicit GlassPage(QWidget *parent = nullptr);
    ~GlassPage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GlassPage *ui;
};

#endif // GLASSPAGE_H
