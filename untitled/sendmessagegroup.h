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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::sendmessagegroup *ui;
};

#endif // SENDMESSAGEGROUP_H
