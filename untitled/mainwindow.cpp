#include "mainwindow.h"
#include"afterlogin.h"
#include "ui_mainwindow.h"
#include<register.h>
#include"register.h"
#include"ui_mainwindow.h"
#include<QApplication>
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
#include<QFile>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());

}
bool MainWindow:: CheckingBox(QString Username ,QString Password)
{

     if(Username.length() == 0){
        QMessageBox::warning(this, "Invalid input", "Username cannot be empty!");
        return false;
    }
    else if(Password.length() == 0){
        QMessageBox::warning(this, "Invalid input", "Password cannot be empty!");
        return false;
}
    return true;
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
 Register * newRegisterPage = new Register();
 newRegisterPage->show();
 this->close();
}


void MainWindow::on_pushButton_clicked()
{
    QString Username = ui->lineEdit->text();
    QString Password = ui->lineEdit_2->text();
    if(!CheckingBox(Username , Password))
        return;
    QNetworkAccessManager * NetAccMan = new QNetworkAccessManager();
    //Create The QNetworkRequest With setUrl For Connect To Server
    QNetworkRequest  Request;
    Request.setUrl("http://api.barafardayebehtar.ml:8080/login?username="+Username+"&password="+Password);
    // Send Request To Server By QNetworkReply Object
    QNetworkReply  * reply = NetAccMan->get(Request);
    while (!reply->isFinished()) {
        QCoreApplication::processEvents();
    }
    //Checking Network Connection
    if(reply->error()==QNetworkReply::NoError)
    {
        QByteArray  Data = reply->readAll();
        QJsonDocument JsonDocument = QJsonDocument::fromJson(Data);
        QJsonObject JObject = JsonDocument.object();
        QString x = JObject.value("message").toString();
        QString token  = JObject.value("token").toString();
        QString code = JObject.value("code").toString();
        if(code=="200")
        {
        // Username_file for save Username
        QFile Username_file("Username.txt");
         if (!Username_file.open(QIODevice::WriteOnly | QIODevice::Text))
             return;

         QTextStream out_username(&Username_file);
         out_username <<Username;
         // Password_file for save Password
         QFile Password_file("Password.txt");
          if (!Password_file.open(QIODevice::WriteOnly | QIODevice::Text))
              return;

          QTextStream out_password(&Password_file);
          out_password <<Password;
        // file for save token
        QFile file("token.txt");
         if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
             return;

         QTextStream out(&file);
         out <<token;
        QMessageBox::information(this,"",x);
        afterLogin * AfterLogin = new afterLogin();
         AfterLogin->show();
        this->close();
}
        else
        {
            QMessageBox::warning(this,"",x);
            return;

        }
    }
    else
    {
        QMessageBox::warning(this,"Network Connection","Make sure you are connected to the Internet");
return;
    }
}

void MainWindow::on_checkBox_stateChanged(int arg1) {
    if(arg1)
        ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    else
        ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

