#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<register.h>
#include"register.h"
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
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool MainWindow::check_sign()
{
    QFile file("token.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        if (file.size() == 0)
        {
            Register * Notoken = new Register();
            Notoken->show();
            this->close();
        }
        else
        {
            //Open Class After Login ...
            QMessageBox::information(this,"Token is Full","https://ece.iut.ac.ir");
        }
    }
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
        QFile file("token.txt");
         if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
             return;

         QTextStream out(&file);
         out <<token;
        QMessageBox::information(this,"",x);
        //Attention : This part will be corrected later
        this->close();

    }
}

