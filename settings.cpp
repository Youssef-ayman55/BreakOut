#include "settings.h"
#include "ui_settings.h"
#include "QPixmap"
#include <QStyle>

settings::settings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::settings)
{

}
settings::settings(QAudioOutput *music , QMediaPlayer *bgsound)     : QWidget(nullptr)
    , ui(new Ui::settings) , bgsound(bgsound), music(music){
    ui->setupUi(this);
    ui->bgvolume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    ui->back_3->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));

    ui->bgslider->setMinimum(0);
    ui->bgslider->setMaximum(100);
    ui->bgslider->setValue(30);
    connect(ui->backM, &QPushButton::clicked, this, &settings::on_backM_clicked);
}

settings::~settings()
{
    delete ui;
}

void settings::on_bgvolume_clicked()
{
    if(IS_Muted == false){
        ui->bgvolume->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
        IS_Muted=true;
        music->setMuted(true);
    }
    else
    {
        ui->bgvolume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        IS_Muted=false;
        music->setMuted(false);


    }
}


void settings::on_back_3_clicked()
{
    if(IS_Muted2 == false){
        ui->back_3->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        IS_Muted2=true;

    }
    else
    {
        ui->back_3->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
        IS_Muted2=false;
    }
}


void settings::on_bgslider_valueChanged(int value)
{
    music->setVolume(value/100.0);
    bgsound->setAudioOutput(music);
}




void settings::on_backM_clicked()
{
    emit backToMW();
    delete this;

}


