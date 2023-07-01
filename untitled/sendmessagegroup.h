#ifndef SENDMESSAGEGROUP_H
#define SENDMESSAGEGROUP_H

#include <QWidget>

namespace Ui {
class sendmessagegroup;
}

class sendmessagegroup : public QWidget
{
    Q_OBJECT

public:
    explicit sendmessagegroup(QWidget *parent = nullptr);
    ~sendmessagegroup();
    bool setFileChatGroup(QString Type_Request_to_recive , QString token , QString relevant_group);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::sendmessagegroup *ui;
    // We Need Username For Fill The Message File
    QString Username;
};

#endif // SENDMESSAGEGROUP_H
