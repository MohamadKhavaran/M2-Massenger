#include "channelpage.h"
#include "ui_channelPage.h"

channelPage::channelPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::channelPage)
{
    ui->setupUi(this);
}

channelPage::~channelPage()
{
    delete ui;
}
