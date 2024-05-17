#include "itemshop.h"
#include "ui_itemshop.h"

ItemShop::ItemShop(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ItemShop)
{

}

ItemShop::ItemShop(QAudioOutput *music5, QMediaPlayer *clicksound): QWidget(nullptr)
    , ui(new Ui::ItemShop),music5(music5), clicksound(clicksound)
{
    ui->setupUi(this);
}

ItemShop::~ItemShop()
{
    delete ui;
}

void ItemShop::on_backM_clicked()
{
    clicksound->play();
    emit back();
    delete this;
}


void ItemShop::on_addf_clicked()
{
    clicksound->play();
}


void ItemShop::on_sellf_clicked()
{
    clicksound->play();
}


void ItemShop::on_addH_clicked()
{
    clicksound->play();
}


void ItemShop::on_sellH_clicked()
{
    clicksound->play();
}


void ItemShop::on_addW_clicked()
{
    clicksound->play();
}


void ItemShop::on_sellW_clicked()
{
    clicksound->play();
}


void ItemShop::on_addS_clicked()
{
    clicksound->play();
}


void ItemShop::on_sellS_clicked()
{
    clicksound->play();
}

