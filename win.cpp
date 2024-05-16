#include "win.h"
#include "ui_win.h"

win::win(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::win)
{
    QAudioOutput *music7 = new QAudioOutput;
    music7->setVolume(100);
    clicksound = new QMediaPlayer;
    clicksound->setAudioOutput(music7);
    clicksound->setSource(QUrl("qrc:/music/Resources/click.mp3"));
    ui->setupUi(this);
    QAudioOutput *music3 = new QAudioOutput;
    music3->setVolume(100);
    winsound = new QMediaPlayer;
    winsound->setAudioOutput(music3);
    winsound->setSource(QUrl("qrc:/music/Resources/winsound.mp3"));
}

win::~win()
{
    delete ui;
}

void win::on_back_2_clicked()
{
    clicksound->play();
    emit backtolevels();
    delete this;
}


void win::on_back_clicked()
{
    clicksound->play();
    //temporary
    emit backtolevels();
    delete this;
}

