#ifndef CALCULATEIMPACTPAGE_H
#define CALCULATEIMPACTPAGE_H

#include <QDialog>

namespace Ui {
class CalculateImpactPage;
}

class CalculateImpactPage : public QDialog
{
    Q_OBJECT

public:

    int a,b,c,d,e,f,g,i,k,l,m,n,o;

    double PollutionAvoided, EnergySavings, WaterSavings;
    double P_aluminum ,E_aluminum ,W_aluminum,P_paper ,E_paper ,W_paper,P_pet ,E_pet ,W_pet,P_wbottle ,E_wbottle ,W_wbottle,P_aluminiumother ,E_aluminiumother ,W_aluminiumother;
    double P_glasscontainers ,E_glasscontainers ,W_glasscontainers,P_hdpe ,E_hdpe ,W_hdpe,P_mplastics ,E_mplastics ,W_mplastics,P_npaper ,E_npaper ,W_npaper;
    double P_opaper ,E_opaper ,W_opaper,P_pvs ,E_pvs ,W_pvs,P_steel ,E_steel ,W_steel,P_steelother ,E_steelother ,W_steelother ;

    void ListOfProducts();
    void Calculation();
    explicit CalculateImpactPage(QWidget *parent = nullptr);
    ~CalculateImpactPage();


private slots:
    void on_pushButton_continue_clicked();

    void on_pushButton_clicked();

private:
    Ui::CalculateImpactPage *ui;
};

#endif // CALCULATEIMPACTPAGE_H
