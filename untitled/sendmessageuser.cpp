#include "sendmessageuser.h"
#include "ui_sendmessageuser.h"
#include"afterlogin.h"
#include"chatpage.h"
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include<QJsonValue>
#include<QMessageBox>
#include<QFile>
sendmessageuser::sendmessageuser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sendmessageuser)
{
    ui->setupUi(this);
}

sendmessageuser::~sendmessageuser()
{
    delete ui;
}

void sendmessageuser::on_pushButton_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage->show();
    this->close();
}


void sendmessageuser::on_pushButton_2_clicked()
{

QString User = ui->lineEdit->text();
ChatPage * newChatUser =  new ChatPage(User,"sendmessageuser");
newChatUser->show();
this->close();

}

