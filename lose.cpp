#include "lose.h"
#include "ui_lose.h"

lose::lose(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::lose)
{
    QAudioOutput *music8 = new QAudioOutput;
    music8->setVolume(100);
    clicksound = new QMediaPlayer;
    clicksound->setAudioOutput(music8);
    clicksound->setSource(QUrl("qrc:/music/Resources/click.mp3"));
    ui->setupUi(this);
    QAudioOutput *music4 = new QAudioOutput;
    music4->setVolume(100);
    losesound = new QMediaPlayer;
    losesound->setAudioOutput(music4);
    losesound->setSource(QUrl("qrc:/music/Resources/lostsound.mp3"));
}

lose::~lose()
{
    delete ui;
}

void lose::on_back_clicked()
{
    clicksound->play();
    emit retry();
    delete this;
}


void lose::on_back_2_clicked()
{
    clicksound->play();
    emit backtolevels();
    delete this;
}

