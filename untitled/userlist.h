#ifndef USERLIST_H
#define USERLIST_H

#include <QWidget>

namespace Ui {
class userlist;
}

class userlist : public QWidget
{
    Q_OBJECT

public:
    explicit userlist(QWidget *parent = nullptr);
    ~userlist();

private slots:
    void on_pushButton_clicked();

private:
    Ui::userlist *ui;
};

#endif // USERLIST_H
