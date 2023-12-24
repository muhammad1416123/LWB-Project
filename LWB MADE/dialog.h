#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    Dialog(QWidget *parent = nullptr,QString message1= "default",QString message2= "default");
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_search_clicked();

    void on_academic_information_clicked();

    void on_HOME_clicked();

    void on_submit_form_clicked();

    void bs_uk(QString u);

    void bs_usa(QString u);

    void bs_austrailia(QString u);

    void bs_canada(QString u);

    void ms_uk(QString u);

    void ms_usa(QString u);

    void ms_austrailia(QString u);

    void ms_canada(QString u);

    void phd_uk(QString u);

    void phd_usa(QString u);

    void phd_austrailia(QString u);

    void phd_canada(QString u);

    void uk(QString t,QString u);

    void usa(QString t,QString u);

    void canada(QString t,QString u);

    void austrailia(QString t,QString u);

    void uk_pic();

    void usa_pic();

    void austrailia_pic();

    void canada_pic();

    float agr();

    float gpa_calculation();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
