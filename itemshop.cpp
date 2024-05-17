#include "itemshop.h"
#include "ui_itemshop.h"
#include <QPixmap>
ItemShop::ItemShop(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ItemShop)
{

}

ItemShop::ItemShop(QAudioOutput *music5, QMediaPlayer *clicksound): QWidget(nullptr)
    , ui(new Ui::ItemShop),music5(music5), clicksound(clicksound)
{
    ui->setupUi(this);
    QPixmap pix1(":/images/Resources/fireball.png");
    ui->fireimage->setPixmap(pix1.scaled(120,120, Qt::KeepAspectRatio));

    QPixmap pix2(":/images/Resources/hugeball.png");
    ui->hugeballimage->setPixmap(pix2.scaled(120,120, Qt::KeepAspectRatio));

    QPixmap pix3(":/images/Resources/paddle.png");
    ui->sliderimage->setPixmap(pix3.scaled(120,120, Qt::KeepAspectRatio));

    QPixmap pix4(":/images/Resources/sword.png");
    ui->weaponimage->setPixmap(pix4.scaled(120,120, Qt::KeepAspectRatio));


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

