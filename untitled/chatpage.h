#ifndef CHATPAGE_H
#define CHATPAGE_H
#include<QApplication>
#include<QCoreApplication>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include<QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include <QWidget>

namespace Ui {
class ChatPage;
}

class ChatPage : public QWidget
{
    Q_OBJECT

public:
    explicit ChatPage(QWidget *parent = nullptr);
    ChatPage( QString , QString);
    void getChat();
    void appendMessage();
    ~ChatPage();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_Send_pushButton_clicked();

    void update();

private:
    Ui::ChatPage *ui;
    QString relevant_username;
    QString Type_Request_to_send;
    QString Type_Request_to_recive;
    QString MessageSent = " ";
    QString token ;
    QNetworkAccessManager *netAccMan;
     QNetworkRequest  Request;
       QNetworkReply  * reply ;
    QByteArray  Data ;
    QJsonDocument JsonDocument;
    QJsonObject JObject;
     QString Message;
     QString code ;
    QString temp ;
    QString temp_Exception ="There Are -0- Message";
    QString temp_Exception_2 ="There Are -1- Message";
    QJsonObject BlockObj;
    QString Message_Recived;
    QString Type_User_Send_Message;
};

#endif // CHATPAGE_H
