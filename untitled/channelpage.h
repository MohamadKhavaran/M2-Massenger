#ifndef CHANNELPAGE_H
#define CHANNELPAGE_H

#include <QWidget>

namespace Ui {
class channelPage;
}

class channelPage : public QWidget
{
    Q_OBJECT

public:
    explicit channelPage(QWidget *parent = nullptr);
    ~channelPage();

private:
    Ui::channelPage *ui;
};

#endif // CHANNELPAGE_H
