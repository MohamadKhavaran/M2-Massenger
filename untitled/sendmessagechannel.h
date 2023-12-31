#ifndef SENDMESSAGECHANNEL_H
#define SENDMESSAGECHANNEL_H

#include <QWidget>

namespace Ui {
class sendmessagechannel;
}

class sendmessagechannel : public QWidget
{
    Q_OBJECT

public:
    explicit sendmessagechannel(QWidget *parent = nullptr);
    ~sendmessagechannel();
    bool setFileChatChannel(QString Type_Request_to_recive , QString token , QString relevant_channel);

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::sendmessagechannel *ui;
};

#endif // SENDMESSAGECHANNEL_H
