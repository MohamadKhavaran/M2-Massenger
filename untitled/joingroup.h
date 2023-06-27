#ifndef JOINGROUP_H
#define JOINGROUP_H

#include <QWidget>

namespace Ui {
class JoinGroup;
}

class JoinGroup : public QWidget
{
    Q_OBJECT

public:
    explicit JoinGroup(QWidget *parent = nullptr);
    ~JoinGroup();
    bool CheckingBox(QString GroupName);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::JoinGroup *ui;
};

#endif // JOINGROUP_H
