#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "blocks.h"
#include <QGraphicsView>
#include <QWidget>
#include <QTimer>
#include "ball.h"
#include "win.h"
#include <QFile>
#include <QTextStream>
#include <QGraphicsScene>
#include "settings.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1200,800);
    music = new QAudioOutput;
    bgsound = new QMediaPlayer();
    bgsound->setSource(QUrl("qrc:/music/Resources/bgsound.mp3"));
    bgsound->play();
    connect(bgsound, &QMediaPlayer::mediaStatusChanged, this, &MainWindow::handleMediaStatusChanged);
    bgsound->play();

    QAudioOutput *music5 = new QAudioOutput;
    music5->setVolume(100);
    clicksound = new QMediaPlayer;
    clicksound->setAudioOutput(music5);
    clicksound->setSource(QUrl("qrc:/music/Resources/click.mp3"));

    connect(ui->settings, &QPushButton::clicked, this, &MainWindow::displaySettingsWindow);

    coins=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::displaylevels(){
    levels_w = new levels;
    QObject::connect(levels_w,&levels::back,this,&MainWindow::reset);
    QObject::connect(levels_w,&levels::level1,this,&MainWindow::startlevel1);
    QObject::connect(levels_w,&levels::level2,this,&MainWindow::startlevel2);
    QObject::connect(levels_w,&levels::level3,this,&MainWindow::startlevel3);
    QObject::connect(levels_w,&levels::level4,this,&MainWindow::startlevel4);
    QObject::connect(levels_w,&levels::level5,this,&MainWindow::startlevel5);
    setCentralWidget(levels_w);
}
void MainWindow::on_new_game_clicked()
{
    clicksound->play();
    displaylevels();

}
void MainWindow::reset(){
    ui->setupUi(this);
}
void MainWindow::startlevel1(){
    start(1);
}
void MainWindow::startlevel2(){
    start(2);
}
void MainWindow::startlevel3(){
    start(3);
}
void MainWindow::startlevel4(){
    start(4);
}
void MainWindow::startlevel5(){
    start(5);
}


void MainWindow:: retrylevel1(){
    startlevel1();
}
void MainWindow::displaySettingsWindow() {
    settings_w=new settings;
    setCentralWidget(settings_w);
    connect(settings_w, &settings::backToMW, this, &MainWindow::reset);
}

void MainWindow::displaywin(){
    delete ball_w;
    delete slider_w;
    delete view;
    delete scene;
    win_w = new win;
    setCentralWidget(win_w);
    QObject::connect(win_w,&win::backtolevels,this,&MainWindow::displaylevels);
    win_w->winsound->play();

}
void MainWindow::displaylose(){
    delete ball_w;
    delete slider_w;
    delete view;
    delete scene;
    lose_w = new lose;
    setCentralWidget(lose_w);
    QObject::connect(lose_w,&lose::backtolevels,this,&MainWindow::displaylevels);
    QObject::connect(lose_w,&lose::retry,this,&MainWindow::retrylevel1);
    lose_w->losesound->play();

}
void MainWindow::start(int x){
    scene = new QGraphicsScene;
    view = new QGraphicsView;
    slider_w = new slider;
    scene->setSceneRect(0,0,1200,800);
    scene->addItem(slider_w);
    slider_w->setPos(550,750);
    view->setFixedSize(1200,800);
    //edit the number of blocks
    if(x==1) ball_w = new ball(15*60);
    if(x==2) ball_w = new ball(18*60);
    if(x==3) ball_w = new ball(15*60);
    if(x==4) ball_w = new ball(1748);
    if(x==5) ball_w = new ball(1748);
    QObject::connect(slider_w, &slider::start, ball_w, &ball::start);
    QObject::connect(slider_w, &slider::fire, ball_w, &ball::activefire);
    QObject::connect(slider_w, &slider::extends, this, &MainWindow::extendslider);
    QObject::connect(slider_w, &slider::extends, ball_w, &ball::activeextending);
    ball_w->setPos(592.5, 710);
    scene->addItem(ball_w);
    ball_w->setup();
    QObject::connect(ball_w,&ball::win,this,&MainWindow::displaywin);
    QObject::connect(ball_w,&ball::lose,this,&MainWindow::displaylose);
    QFile levelsfile;
    if(x==1)levelsfile.setFileName(":/levels/level1.txt");
    if(x==2)levelsfile.setFileName(":/levels/level2.txt");
    if(x==3)levelsfile.setFileName(":/levels/level3.txt");
    if(x==4)levelsfile.setFileName(":/levels/level4.txt");
    if(x==5)levelsfile.setFileName(":/levels/level5.txt");
    if (levelsfile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&levelsfile);
        for(int i=0; i<25; i++){
            for(int j=0; j<60; j++){
                int t;
                in>>t;
                if(t!=0){
                    blocks *newblock= new blocks(t);
                    newblock->setRect(0,0,20,20);
                    newblock->setPos(j * 20, i * 20 +30);
                    scene->addItem(newblock);
                    newblock->setup(scene);
                }
            }
        }
        levelsfile.close();
    }
    view->setScene(scene);
    setCentralWidget(view);
    this->setFocus();
    view->setFocus();
    view->activateWindow();
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    slider_w->setFlag(QGraphicsItem::ItemIsFocusable);
    slider_w->setFocus();
}

void MainWindow::handleMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    if (status == QMediaPlayer::EndOfMedia)
    {
        // Restart playback when the end of media is reached
        settings_w->bgsound->setPosition(0);
        settings_w->bgsound->play();
    }
}

void MainWindow::extendslider(){
    int tempx=slider_w->x();
    int tempy=slider_w->y();
    slider_w->setRect(0,0,200,20);
    slider_w->setPos(tempx-50,tempy);
}
