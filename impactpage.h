#ifndef IMPACTPAGE_H
#define IMPACTPAGE_H

#include <QDialog>

namespace Ui {
class ImpactPage;
}

class ImpactPage : public QDialog
{
    Q_OBJECT

public:
    explicit ImpactPage(QWidget *parent = nullptr);
    ~ImpactPage();

private:
    Ui::ImpactPage *ui;
};

#endif // IMPACTPAGE_H
