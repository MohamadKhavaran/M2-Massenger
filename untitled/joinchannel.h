#ifndef JOINCHANNEL_H
#define JOINCHANNEL_H

#include <QWidget>

namespace Ui {
class JoinChannel;
}

class JoinChannel : public QWidget
{
    Q_OBJECT

public:
    explicit JoinChannel(QWidget *parent = nullptr);
    ~JoinChannel();
    bool CheckingBox(QString ChannelName);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::JoinChannel *ui;
};

#endif // JOINCHANNEL_H
