#ifndef CREATECHANNEL_H
#define CREATECHANNEL_H

#include <QWidget>

namespace Ui {
class CreateChannel;
}

class CreateChannel : public QWidget
{
    Q_OBJECT

public:
    explicit CreateChannel(QWidget *parent = nullptr);
    bool CheckingBox(QString ChannelName ,QString ChannelTitle);
    ~CreateChannel();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CreateChannel *ui;
};

#endif // CREATECHANNEL_H
