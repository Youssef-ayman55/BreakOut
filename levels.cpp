#include "levels.h"
#include "ui_levels.h"

levels::levels(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levels)
{
    QAudioOutput *music6 = new QAudioOutput;
    music6->setVolume(100);
    clicksound = new QMediaPlayer;
    clicksound->setAudioOutput(music6);
    clicksound->setSource(QUrl("qrc:/music/Resources/click.mp3"));
    ui->setupUi(this);
}

levels::~levels()
{
    delete ui;
}

void levels::on_back_clicked()
{
    clicksound->play();
    emit back();
    delete this;
}


void levels::on_level1_clicked()
{
    clicksound->play();
    emit level1();
    delete this;
}

void levels::on_level2_clicked()
{
    clicksound->play();
    emit level2();
    delete this;
}



void levels::on_level3_clicked()
{
    clicksound->play();
    emit level3();
    delete this;
}


void levels::on_level4_clicked()
{
    clicksound->play();
    emit level4();
    delete this;
}


void levels::on_level5_clicked()
{
    clicksound->play();
    emit level5();
    delete this;
}

