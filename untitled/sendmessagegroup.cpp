#include "sendmessagegroup.h"
#include "ui_sendmessagegroup.h"
#include"chatpage.h"
#include"afterlogin.h"
#include<QMessageBox>
sendmessagegroup::sendmessagegroup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sendmessagegroup)
{
    ui->setupUi(this);
}

sendmessagegroup::~sendmessagegroup()
{
    delete ui;
}

void sendmessagegroup::on_pushButton_clicked()
{
    QString groupName = ui->lineEdit->text();
    if(!(ui->lineEdit->text().trimmed().isEmpty()))
    {
    ChatPage * newChatUser =  new ChatPage(groupName,"sendmessagegroup");
    newChatUser->show();
    this->close();
    }
    else
    {
        QMessageBox::warning(this,"","GroupName Cannot Be Empty !");
        return;
    }
}


void sendmessagegroup::on_pushButton_2_clicked()
{
    afterLogin * BacktoPage = new afterLogin();
    BacktoPage->show();
    this->close();
}

