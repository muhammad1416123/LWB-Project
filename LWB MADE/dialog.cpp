#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include "QString"
#include "fstream"
#include <QFile>
#include "QCoreApplication"
#include <QTextStream>
#include "QMessageBox"
#include "QLabel"
using namespace std;
QString stri1, stri2, stri3, stri4, stri5, stri6, stri7, username, password;
Dialog::Dialog(QWidget *parent,QString message1,QString message2) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/lwb-high-resolution-logo-white.png");
    int w = ui->label_27->width();
    int h = ui->label_27->height();
    ui->label_27->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->comboBox->addItem(QIcon(":/resources/img/USA.png"),"USA");
    ui->comboBox->addItem(QIcon(":/resources/img/Canada.png"),"CANADA");
    ui->comboBox->addItem(QIcon(":/resources/img/UK.png"),"UK");
    ui->comboBox->addItem(QIcon(":/resources/img/UK.png"),"AUSTRAILIA");
    ui->comboBox_3->addItem(QIcon(":/resources/img/CS.png"),"Computer & IT");
    ui->comboBox_3->addItem(QIcon(":/resources/img/business.png"),"Business studies");
    ui->comboBox_3->addItem(QIcon(":/resources/img/Social Sciences.png"),"Social Sciences");
    ui->comboBox_3->addItem(QIcon(":/resources/img/Social Sciences.png"),"Law & Media");
    ui->textEdit->setText(message1);
    ui->textEdit_8->setText(message2);
}
/*Dialog::Dialog(QWidget *parent,QString message1,QString message2) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->label_11->setText(message1);
    ui->label_17->setText(message2);
}*/
Dialog::~Dialog()
{
    delete ui;
}
float Dialog::agr()
{
    float m_num;
    m_num = stri3.toFloat();
    float In_num;
    In_num = stri4.toFloat();

    float pr_matric ;
    float pr_inter ;
    float res ;
    pr_matric=(m_num/1100)*40;
    pr_inter=(In_num/1100)*60;
    res= pr_matric + pr_inter;
    return res;

}

float Dialog::gpa_calculation()
{
    float gpa;
    gpa = stri7.toFloat();
    return gpa;

}
void Dialog::bs_uk(QString u)
{
    if(u=="Computer & IT")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("18,760");
        ui->FEES_2->setText("18,170");
        ui->FEES_3->setText("39,511");
        ui->FEES_4->setText("24,401");
        ui->FEES_5->setText("38,173");
        ui->FEES_5->setText("38,173");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","please select all the required fields");
}
void Dialog::bs_usa(QString u)
{
    if(u=="Computer & IT")
    {
        usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
         usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
         usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
         usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::warning(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::bs_austrailia(QString u)
{
    if(u=="Computer & IT")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::bs_canada(QString u)
{
    if(u=="Computer & IT")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w;
            w = agr();
            {
                if(w>=95)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=90)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=70)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=90)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=80)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_17->setText("29% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=90)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=80)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=70)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_39->setText("97% Scholarship");
                else if(w>=90)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=80)
                    ui->label_39->setText("45% Scholarship");
                else if(w>=70)
                    ui->label_39->setText("20% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=95)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=90)
                    ui->label_40->setText("74% Scholarship");
                else if(w>=80)
                    ui->label_40->setText("54% Scholarship");
                else if(w>=70)
                    ui->label_40->setText("24% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::ms_uk(QString u)
{
    if(u=="Computer & IT")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :1 Years");
        ui->DURATION_2->setText("Duration :1 Years");
        ui->DURATION_3->setText("Duration :1 Years");
        ui->DURATION_4->setText("Duration :1 Years");
        ui->DURATION_5->setText("Duration :1 Years");
        ui->FEES_1->setText("$13,760");
        ui->FEES_2->setText("$13,170");
        ui->FEES_3->setText("$34,511");
        ui->FEES_4->setText("$20,401");
        ui->FEES_5->setText("$34,173");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :1 Years");
        ui->DURATION_2->setText("Duration :1 Years");
        ui->DURATION_3->setText("Duration :1 Years");
        ui->DURATION_4->setText("Duration :1 Years");
        ui->DURATION_5->setText("Duration :1 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :1 Years");
        ui->DURATION_2->setText("Duration :1 Years");
        ui->DURATION_3->setText("Duration :1 Years");
        ui->DURATION_4->setText("Duration :1 Years");
        ui->DURATION_5->setText("Duration :1 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :1 Years");
        ui->DURATION_2->setText("Duration :1 Years");
        ui->DURATION_3->setText("Duration :1 Years");
        ui->DURATION_4->setText("Duration :1 Years");
        ui->DURATION_5->setText("Duration :1 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::ms_usa(QString u)
{
    if(u=="Computer & IT")
    {
         usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
         usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
         usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
         usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::ms_austrailia(QString u)
{
    if(u=="Computer & IT")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::ms_canada(QString u)
{
    if(u=="Computer & IT")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :2 Years");
        ui->DURATION_2->setText("Duration :2 Years");
        ui->DURATION_3->setText("Duration :2 Years");
        ui->DURATION_4->setText("Duration :2 Years");
        ui->DURATION_5->setText("Duration :2 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::phd_uk(QString u)
{
    if(u=="Computer & IT")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :3 Years");
        ui->DURATION_2->setText("Duration :3 Years");
        ui->DURATION_3->setText("Duration :3 Years");
        ui->DURATION_4->setText("Duration :3 Years");
        ui->DURATION_5->setText("Duration :3 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :3 Years");
        ui->DURATION_2->setText("Duration :3 Years");
        ui->DURATION_3->setText("Duration :3 Years");
        ui->DURATION_4->setText("Duration :3 Years");
        ui->DURATION_5->setText("Duration :3 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :3 Years");
        ui->DURATION_2->setText("Duration :3 Years");
        ui->DURATION_3->setText("Duration :3 Years");
        ui->DURATION_4->setText("Duration :3 Years");
        ui->DURATION_5->setText("Duration :3 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        uk_pic();
        ui->university_1->setText("University of Westminister");
        ui->university_2->setText("University of South Wales");
        ui->university_3->setText("University of Bristol");
        ui->university_4->setText("Brunel University London");
        ui->university_5->setText("University of Glasgow");
        ui->DURATION_1->setText("Duration :3 Years");
        ui->DURATION_2->setText("Duration :3 Years");
        ui->DURATION_3->setText("Duration :3 Years");
        ui->DURATION_4->setText("Duration :3 Years");
        ui->DURATION_5->setText("Duration :3 Years");
        ui->FEES_1->setText("$18,760");
        ui->FEES_2->setText("$18,170");
        ui->FEES_3->setText("$39,511");
        ui->FEES_4->setText("$24,401");
        ui->FEES_5->setText("$38,173");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::phd_usa(QString u)
{
    if(u=="Computer & IT")
    {
        usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        usa_pic();
        ui->university_1->setText("Illinois university of technology");
        ui->university_2->setText("Mississippi State University");
        ui->university_3->setText("The University of Texas at Arlington");
        ui->university_4->setText("New York University");
        ui->university_5->setText("University of Washington");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$48,500");
        ui->FEES_2->setText("$25,444");
        ui->FEES_3->setText("$27,500");
        ui->FEES_4->setText("$60,170");
        ui->FEES_5->setText("$40,950");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::phd_austrailia(QString u)
{
    if(u=="Computer & IT")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        austrailia_pic();
        ui->university_1->setText("Charles Darwin University");
        ui->university_2->setText("University of Newcastle");
        ui->university_3->setText("University of Canberra");
        ui->university_4->setText("Curtin University");
        ui->university_5->setText("University of Technology Sydney");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$21,129");
        ui->FEES_2->setText("$26,634");
        ui->FEES_3->setText("$21,337");
        ui->FEES_4->setText("$21,803");
        ui->FEES_5->setText("$32,037");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog::phd_canada(QString u)
{
    if(u=="Computer & IT")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Law & Media")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Social Sciences")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else if(u=="Business studies")
    {
        canada_pic();
        ui->university_1->setText("University of Winnipeg");
        ui->university_2->setText("Toronto Metropolitan University");
        ui->university_3->setText("University of Windsor");
        ui->university_4->setText("Trent University");
        ui->university_5->setText("McGill University");
        ui->DURATION_1->setText("Duration :4 Years");
        ui->DURATION_2->setText("Duration :4 Years");
        ui->DURATION_3->setText("Duration :4 Years");
        ui->DURATION_4->setText("Duration :4 Years");
        ui->DURATION_5->setText("Duration :4 Years");
        ui->FEES_1->setText("$14,467");
        ui->FEES_2->setText("$28,450");
        ui->FEES_3->setText("$26,272");
        ui->FEES_4->setText("$20,939");
        ui->FEES_5->setText("$43,054");
        {
            float w=0;
            w = gpa_calculation();
            {
                if(w>=3.9)
                    ui->label_11->setText("90% Scholarship");
                else if(w>=3.7)
                    ui->label_11->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_11->setText("50% Scholarship");
                else if(w>=2.9)
                    ui->label_11->setText("25% Scholarship");
                else
                    ui->label_11->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_17->setText("99% Scholarship");
                else if(w>=3.3)
                    ui->label_17->setText("65% Scholarship");
                else if(w>=3.7)
                    ui->label_17->setText("45% Scholarship");
                else if(w>=3.9)
                    ui->label_17->setText("20% Scholarship");
                else
                    ui->label_17->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=2.9)
                    ui->label_38->setText("93% Scholarship");
                else if(w>=3.3)
                    ui->label_38->setText("73% Scholarship");
                else if(w>=3.7)
                    ui->label_38->setText("53% Scholarship");
                else if(w>=3.9)
                    ui->label_38->setText("23% Scholarship");
                else
                    ui->label_38->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_39->setText("99% Scholarship");
                else if(w>=3.7)
                    ui->label_39->setText("75% Scholarship");
                else if(w>=3.3)
                    ui->label_39->setText("44% Scholarship");
                else if(w>=2.9)
                    ui->label_39->setText("29% Scholarship");
                else
                    ui->label_39->setText("NO SCHOLARSHIP");
            }
            {
                if(w>=3.9)
                    ui->label_40->setText("100% Scholarship");
                else if(w>=3.7)
                    ui->label_40->setText("77% Scholarship");
                else if(w>=3.3)
                    ui->label_40->setText("55% Scholarship");
                else if(w>=2.9)
                    ui->label_40->setText("22% Scholarship");
                else
                    ui->label_40->setText("NO SCHOLARSHIP");
            }
        }

    }
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}
void Dialog:: uk(QString t,QString u)
{
    if(t=="BS")
        bs_uk(u);
    else if(t=="MS")
        ms_uk(u);
    else if(t=="PHD")
        phd_uk(u);
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");


}
void Dialog:: usa(QString t,QString u)
{
    if(t=="BS")
        bs_usa(u);
    else if(t=="MS")
        ms_usa(u);
    else if(t=="PHD")
        phd_usa(u);
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");

}
void Dialog::canada(QString t,QString u)
{

    if(t=="BS")
        bs_canada(u);
    else if(t=="MS")
        ms_canada(u);
    else if(t=="PHD")
        phd_canada(u);
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");

}
void Dialog:: austrailia(QString t,QString u)
{

    if(t=="BS")
        bs_austrailia(u);
    else if(t=="MS")
        ms_austrailia(u);
    else if(t=="PHD")
        phd_austrailia(u);
    else
        QMessageBox::information(nullptr,"could'nt found","Completely fill the required fields");
}

void Dialog::uk_pic()
{
    //1st uni picture
    {
        QPixmap pix(":/resources/img/westmier uni UK.png");
        int w = ui->label_12->width();
        int h = ui->label_12->height();
        ui->label_12->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //2nd uni picture
    {
        QPixmap pix(":/resources/img/brunel-university-uk.png");
        int w = ui->label_13->width();
        int h = ui->label_13->height();
        ui->label_13->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //3rd uni picture
    {
        QPixmap pix(":/resources/img/the-university-of-south-wales-UK.png");
        int w = ui->label_14->width();
        int h = ui->label_14->height();
        ui->label_14->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //4th uni picture
    {
        QPixmap pix(":/resources/img/university-of-glasgow-logo UK.png");
        int w = ui->label_15->width();
        int h = ui->label_15->height();
        ui->label_15->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //5th uni picture
    {
        QPixmap pix(":/resources/img/bristol uni uk.png");
        int w = ui->label_16->width();
        int h = ui->label_16->height();
        ui->label_16->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
}
void Dialog::usa_pic()
{
    //1st uni picture
    {
        QPixmap pix(":/resources/img/illinois-institute-of-technology-logo-USA.gif");
        int w = ui->label_12->width();
        int h = ui->label_12->height();
        ui->label_12->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //2nd uni picture
    {
        QPixmap pix(":/resources/img/missospi USA.png");
        int w = ui->label_13->width();
        int h = ui->label_13->height();
        ui->label_13->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //3rd uni picture
    {
        QPixmap pix(":/resources/img/uni of texas USA.jpeg");
        int w = ui->label_14->width();
        int h = ui->label_14->height();
        ui->label_14->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //4th uni picture
    {
        QPixmap pix(":/resources/img/new york uni USA.png");
        int w = ui->label_15->width();
        int h = ui->label_15->height();
        ui->label_15->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //5th uni picture
    {
        QPixmap pix(":/resources/img/University_of_Washington USA.png");
        int w = ui->label_16->width();
        int h = ui->label_16->height();
        ui->label_16->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
}
void Dialog::austrailia_pic()
{
    //1st uni picture
    {
        QPixmap pix(":/resources/img/charles drwan uni AS.png");
        int w = ui->label_12->width();
        int h = ui->label_12->height();
        ui->label_12->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //2nd uni picture
    {
        QPixmap pix(":/resources/img/newcastle-university AS.png");
        int w = ui->label_13->width();
        int h = ui->label_13->height();
        ui->label_13->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //3rd uni picture
    {
        QPixmap pix(":/resources/img/uni of canberra AS.png");
        int w = ui->label_14->width();
        int h = ui->label_14->height();
        ui->label_14->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //4th uni picture
    {
        QPixmap pix(":/resources/img/curtin uni AS.png");
        int w = ui->label_15->width();
        int h = ui->label_15->height();
        ui->label_15->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //5th uni picture
    {
        QPixmap pix(":/resources/img/uni of tec sydny AS.jpg");
        int w = ui->label_16->width();
        int h = ui->label_16->height();
        ui->label_16->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }

}
void Dialog::canada_pic()
{
    //1st uni picture
    {
        QPixmap pix(":/resources/img/uni of winnipeg canada.png");
        int w = ui->label_12->width();
        int h = ui->label_12->height();
        ui->label_12->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //2nd uni picture
    {
        QPixmap pix(":/resources/img/tronto canada.png");
        int w = ui->label_13->width();
        int h = ui->label_13->height();
        ui->label_13->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //3rd uni picture
    {
        QPixmap pix(":/resources/img/windsor uni canada.png");
        int w = ui->label_14->width();
        int h = ui->label_14->height();
        ui->label_14->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //4th uni picture
    {
        QPixmap pix(":/resources/img/trent uni canada.png");
        int w = ui->label_15->width();
        int h = ui->label_15->height();
        ui->label_15->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }
    //5th uni picture
    {
        QPixmap pix(":/resources/img/mcgill-university canada.jpg");
        int w = ui->label_16->width();
        int h = ui->label_16->height();
        ui->label_16->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    }

}
void Dialog::on_pushButton_clicked()
{
    QString s = ui->comboBox->currentText();
    QString t = ui->comboBox_2->currentText();
    QString u = ui->comboBox_3->currentText();
    if(s=="UK")
        uk(t,u);
    else if(s=="USA")
        usa(t,u);
    else if (s == "CANADA")
        canada(t,u);
    else if (s == "AUSTRAILIA")
        austrailia(t,u);
    else
        QMessageBox::information(this,"could'nt search","Please select all the required fields");


}
void Dialog::on_pushButton_2_clicked()
{
    int i=0;
    QString str, s_username, s_password, username_p, password_p;
    username_p =ui->textEdit->toPlainText();
    password_p = ui->textEdit_8->toPlainText();
    QFile file("C:/Users/Mohammad/OneDrive/Desktop/LWB MADE/Personal/info1.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        while(i<10)
        {
            stream>>stri1;
            stream>>stri2;
            stream>>stri3;
            stream>>stri4;
            stream>>stri5;
            stream>>stri6;
            stream>>stri7;
            stream>>s_username;
            stream>>s_password;
            if(s_username==username_p&&s_password==password_p)
                break;
            else
            {
                stream>>str;
                if(str!="/")
                {
                    i=10;
                }
                continue;
            }
        }
    }
    if(s_username==username_p&&s_password==password_p)
    {
        ui->stackedWidget->setCurrentIndex(3);
        ui->label_18->setText(stri1);
        ui->label_19->setText(stri2);
        ui->label_20->setText(stri3);
        ui->label_21->setText(stri4);
        ui->label_22->setText(stri5);
        ui->label_23->setText(stri6);
        ui->label_24->setText(stri7);
    }
    else
    {
        QMessageBox::information(this,"Warning","NO profile found;fill the academic portion.");
    }
}

void Dialog::on_search_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void Dialog::on_academic_information_clicked()
{
    int J=0;
    QString sc_username,sc_password,S,username_c,password_c,S1,S2,S3,S4,S5,S6,S7 ;
    username_c =ui->textEdit->toPlainText();
    password_c = ui->textEdit_8->toPlainText();
    QFile file("C:/Users/Mohammad/OneDrive/Desktop/LWB MADE/Personal/info1.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        while(J<10)
        {
            stream>>S1;
            stream>>S2;
            stream>>S3;
            stream>>S4;
            stream>>S5;
            stream>>S6;
            stream>>S7;
            stream>>sc_username;
            stream>>sc_password;
            if(sc_username==username_c&&sc_password==password_c)
                break;
            else
            {
                stream>>S;
                if(S!="/")
                {
                    J=10;
                }
                continue;
            }
        }
    }
    file.close();
    if(sc_username==username_c&&sc_password==password_c)
    {
        QMessageBox::information(this,"LWB","You have already submitted you profile info.");
    }
    else
    {
        ui->stackedWidget->setCurrentIndex(1);
    }
}


void Dialog::on_HOME_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Dialog::on_submit_form_clicked()
{
    QString str1, str2, str3, str4, str5, str6, str7;
    str1 = ui->textEdit_2->toPlainText();
    str2 = ui->textEdit_3->toPlainText();
    str3 = ui->textEdit_4->toPlainText();
    str4 = ui->textEdit_5->toPlainText();
    str5 = ui->textEdit_6->toPlainText();
    str6 = ui->textEdit_7->toPlainText();
    str7 = ui->textEdit_gpa->toPlainText();
    username =ui->textEdit->toPlainText();
    password = ui->textEdit_8->toPlainText();
    int i,j,k,l,m,n,o;
    i=str1.size();
    j=str2.size();
    k=str3.size();
    l=str4.size();
    m=str5.size();
    n=str6.size();
    o=str7.size();
    if(i>0&&j>0&&m>0&&n>0&&((k>0&&l>0)||o>0))
    {
        QFile file("C:/Users/Mohammad/OneDrive/Desktop/LWB MADE/Personal/info1.txt");
        if (file.open(QIODevice::Append | QIODevice::ReadWrite))
        {
            QTextStream stream(&file);
            stream<<str1<<"\n";
            stream<<str2<<"\n";
            if(k>0&&l>0)
            {
                stream<<str3<<"\n";
                stream<<str4<<"\n";
            }
            else{
                stream<<"-\n";
                stream<<"-\n";
            }
            stream<<str5<<"\n";
            stream<<str6<<"\n";
            if(o>0){
               stream<<str7<<"\n";
            }
            else{
                stream<<"_\n";
            }
            stream<<username<<"\n";
            stream<<password<<"\n";
            stream<<"/\n";
        }
        file.close();
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        QMessageBox::warning(this,"Warning","Completely fill the required fields.");
    }
}







