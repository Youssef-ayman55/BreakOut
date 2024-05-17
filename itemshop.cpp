#include "itemshop.h"
#include "ui_itemshop.h"
#include <QPixmap>
ItemShop::ItemShop(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ItemShop)
{

}

ItemShop::ItemShop(QAudioOutput *music5, QMediaPlayer *clicksound, int coins, int fireball, int hugeball, int weapons, int extension): QWidget(nullptr)
    , ui(new Ui::ItemShop),music5(music5), clicksound(clicksound), coins(coins), fireball(fireball), hugeball(hugeball), weapons(weapons), extension(extension)
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
    emit sale();
}

void ItemShop::on_addf_clicked()
{
    clicksound->play();
    if(coins>=2000){
        coins-=2000;
        fireball++;
        ui->warning->setText("Payment successful");
    }else{
        ui->warning->setText("You do not have enough coins.");
    }
}

void ItemShop::on_sellf_clicked()
{
    if(fireball){
        fireball--;
        coins+=2000;
        ui->warning->setText("Sale successful");
    }else{
        ui->warning->setText("You do not have enough fire balls.");
    }
    clicksound->play();
}

void ItemShop::on_addH_clicked()
{
    if(coins>=1000){
        coins-=1000;
        hugeball++;
        ui->warning->setText("Payment successful");
    }else{
        ui->warning->setText("You do not have enough coins.");
    }
    clicksound->play();
}


void ItemShop::on_sellH_clicked()
{
    if(hugeball){
        hugeball--;
        coins+=1000;
        ui->warning->setText("Sale successful");
    }else{
        ui->warning->setText("You do not have enough huge balls.");
    }
    clicksound->play();
}


void ItemShop::on_addW_clicked()
{
    if(coins>=200){
        coins-=200;
        weapons++;
        ui->warning->setText("Payment successful");
    }else{
        ui->warning->setText("You do not have enough coins.");
    }
    clicksound->play();
}


void ItemShop::on_sellW_clicked()
{
    if(weapons){
        weapons--;
        coins+=200;
        ui->warning->setText("Sale successful");
    }else{
        ui->warning->setText("You do not have enough weapons.");
    }
    clicksound->play();
}


void ItemShop::on_addS_clicked()
{
    if(coins>=5000){
        coins-=5000;
        extension++;
        ui->warning->setText("Payment successful");
    }else{
        ui->warning->setText("You does not have enough coins.");
    }
    clicksound->play();
}


void ItemShop::on_sellS_clicked()
{
    if(extension){
        extension--;
        coins+=5000;
        ui->warning->setText("Sale successful");
    }else{
        ui->warning->setText("You do not have enough extended sliders.");
    }
    clicksound->play();
}

