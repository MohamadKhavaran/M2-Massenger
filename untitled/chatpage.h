#ifndef CHATPAGE_H
#define CHATPAGE_H

#include <QWidget>

namespace Ui {
class ChatPage;
}

class ChatPage : public QWidget
{
    Q_OBJECT

public:
    explicit ChatPage(QWidget *parent = nullptr);
    ChatPage(QString , QString);
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

};

#endif // CHATPAGE_H
