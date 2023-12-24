#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "dialog.h"
#include <QPixmap>
#include <QFile>
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/Login.png");
    int w = ui->label_pic1->width();
    int h = ui->label_pic1->height();
    ui->label_pic1->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_login_clicked()
{
    QString s_username,s_password,str;
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    int i=0;
    QFile file("C:/Users/Mohammad/OneDrive/Desktop/LWB MADE/Personal/info2.txt");
    if(file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        while(i<10){
            stream>>s_username;
            stream>>s_password;
            if(s_username==username&&s_password==password)
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
    if(username==s_username&&password==s_password){
        hide();
        Dialog* myDialog= new Dialog(this,username,password);
        myDialog->show();
    }
    else{
        QMessageBox::warning(this,"Login Unsuccessful","Username and password is incorrect!!");
    }
}
void MainWindow::on_Register_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_Submit_clicked()
{
    int name_size,password_size;
    QString username = ui->name_edit->text();
    QString password = ui->password_edit->text();
    QString confirm = ui->confirm->text();
    name_size=username.size();
    password_size=password.size();
    if(name_size>0&&password_size>0)
    {
        if(password==confirm)
        {
            ui->stackedWidget->setCurrentIndex(0);
            QFile file("C:/Users/Mohammad/OneDrive/Desktop/LWB MADE/Personal/info2.txt");
             if(file.open(QIODevice::Append | QIODevice::ReadWrite))
                {
                 QTextStream stream(&file);
                 stream<<username<<"\n";
                 stream<<password<<"\n";
                 stream<<"/\n";
                }
             file.close();
        }
        else
        {
            QMessageBox::warning(this,"warning"," new password and confirm password should be same.");
        }
    }
    else
    {
        QMessageBox::warning(this,"Warnimg"," Please completely fill the required fields");
    }
}

