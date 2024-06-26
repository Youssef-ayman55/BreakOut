#include "settings.h"
#include "ui_settings.h"
#include "QPixmap"
#include <QStyle>

settings::settings(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::settings)
{

}
settings::settings(QAudioOutput *music , QMediaPlayer *bgsound, QAudioOutput * music5, QMediaPlayer * clicksound,
                   QAudioOutput * m6, QMediaPlayer * brick,QAudioOutput * m7, QMediaPlayer * slider): QWidget(nullptr)
    , ui(new Ui::settings) ,  music(music), bgsound(bgsound), music5(music5), clicksound(clicksound), m6(m6), bricksound(brick),
    m7(m7), slidersound(slider) {
    ui->setupUi(this);
    ui->bgvolume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    ui->back_3->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    ui->bgslider->setMinimum(0);
    ui->bgslider->setMaximum(100);
    ui->effects->setMaximum(100);
    ui->effects->setMinimum(0);
    ui->bgslider->setValue(100 * music->volume());
    ui->effects->setValue(100 * music5->volume());
    if(music->isMuted() == false){
        ui->bgvolume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    }
    else
    {
        ui->bgvolume->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
    }

    if(music5->isMuted() == false){
        ui->back_3->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    }
    else
    {
        ui->back_3->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
    }
}

settings::~settings()
{
    delete ui;
}

void settings::on_bgvolume_clicked()
{

    if(music->isMuted() == false){
        music->setMuted(true);
        ui->bgvolume->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
    }
    else
    {
        ui->bgvolume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        music->setMuted(false);
    }
}


void settings::on_back_3_clicked()
{
    if(music5->isMuted() == false){
        ui->back_3->setIcon(style()->standardIcon(QStyle::SP_MediaVolumeMuted));
        music5->setMuted(true);
        m6->setMuted(true);
        m7->setMuted(true);

    }
    else
    {
        ui->back_3->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
        music5->setMuted(false);
        m6->setMuted(false);
        m7->setMuted(false);
    }
}


void settings::on_bgslider_valueChanged(int value)
{
    music->setVolume(value/100.0);
    bgsound->setAudioOutput(music);
}




void settings::on_backM_clicked()
{
    clicksound->play();
    emit backToMW();
    delete this;

}



void settings::on_effects_valueChanged(int value)
{
    music5->setVolume(value/100.0);
    clicksound->setAudioOutput(music5);
}

