#ifndef CHANNELLIST_H
#define CHANNELLIST_H

#include <QWidget>

namespace Ui {
class channellist;
}

class channellist : public QWidget
{
    Q_OBJECT

public:
    explicit channellist(QWidget *parent = nullptr);
    ~channellist();

private slots:
    void on_pushButton_clicked();

private:
    Ui::channellist *ui;
};

#endif // CHANNELLIST_H
