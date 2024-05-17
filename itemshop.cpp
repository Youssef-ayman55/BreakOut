#include "itemshop.h"
#include "ui_itemshop.h"

ItemShop::ItemShop(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ItemShop)
{
    ui->setupUi(this);
}

ItemShop::~ItemShop()
{
    delete ui;
}
