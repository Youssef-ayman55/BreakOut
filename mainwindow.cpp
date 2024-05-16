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
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QAudioOutput *music = new QAudioOutput;
    music->setVolume(100);
    bgsound = new QMediaPlayer;
    bgsound->setAudioOutput(music);
    bgsound->setSource(QUrl("qrc:/music/Resources/bgsound.mp3"));
    bgsound->play();

    connect(bgsound, &QMediaPlayer::mediaStatusChanged, this, &MainWindow::handleMediaStatusChanged);
    bgsound->play();


    QAudioOutput *music5 = new QAudioOutput;
    music5->setVolume(100);
    clicksound = new QMediaPlayer;
    clicksound->setAudioOutput(music5);
    clicksound->setSource(QUrl("qrc:/music/Resources/click.mp3"));

    ui->setupUi(this);
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
    if(x==1) ball_w = new ball(15*60);
    if(x==2) ball_w = new ball(18*60);
    if(x==3) ball_w = new ball(15*60);
    if(x==4) ball_w = new ball(1748);
    if(x==5) ball_w = new ball(1748);
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
                    newblock->setPos(j * 20, i * 20);
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
        bgsound->setPosition(0);
        bgsound->play();
    }
}

