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
#include <QFile>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1200,800);
    music = new QAudioOutput;
    bgsound = new QMediaPlayer();
    music->setVolume(1);
    bgsound->setSource(QUrl("qrc:/music/Resources/bgsound.mp3"));
    bgsound->setAudioOutput(music);
    bgsound->play();
    connect(bgsound, &QMediaPlayer::mediaStatusChanged, this, &MainWindow::handleMediaStatusChanged);
    bgsound->play();
    music5 = new QAudioOutput;
    music5->setVolume(1);
    clicksound = new QMediaPlayer;
    clicksound->setAudioOutput(music5);
    clicksound->setSource(QUrl("qrc:/music/Resources/click.mp3"));
    QFile save("save.txt");
    QVector<int> input;
    if (save.open(QIODevice::ReadOnly))
    {
        QTextStream in(&save);
        while (!in.atEnd())
        {
            QString x;
            x=in.readLine();
            input.push_back(x.toInt());
        }
        save.close();
        in.flush();
        if(input.size() >= 6){
            current_level = input[0];
            coins = input[1];
            fireball = input[2];
            weapons = input[3];
            hugeball = input[4];
            extension = input[5];
        }
        else{
            current_level = 1;
            coins = 0;
            fireball = 0;
            weapons = 0;
            hugeball = 0;
            extension = 0;
        }
    }
}

MainWindow::~MainWindow()
{
    QFile save("save.txt");
    QTextStream out(&save);
    if(save.open(QIODevice::WriteOnly | QIODevice::Truncate)){
        out << current_level << '\n';
        out << coins << '\n';
        out << fireball << '\n';
        out << weapons << '\n';
        out << hugeball << '\n';
        out << extension << '\n';
        save.close();
        out.flush();
    }
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
    QObject::connect(levels_w,&levels::click, clicksound, &QMediaPlayer::play);
    setCentralWidget(levels_w);
}
void MainWindow::on_new_game_clicked()
{
    clicksound->play();
    displaylevels();

}

void MainWindow::displayshop()
{
    shop_w = new ItemShop(music5, clicksound, coins, fireball, hugeball, weapons, extension);
    QObject::connect(shop_w,&ItemShop::back,this,&MainWindow::reset);
    QObject::connect(shop_w,&ItemShop::sale,this,&MainWindow::sale);
}

void MainWindow::on_itemshop_clicked()
{
    clicksound->play();
    displayshop();
    setCentralWidget(shop_w);
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
    if(x==1) ball_w = new ball(900);
    if(x==2) ball_w = new ball(1020);
    if(x==3) ball_w = new ball(1098);
    if(x==4) ball_w = new ball(1248);
    if(x==5) ball_w = new ball(1233);
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
        bgsound->setPosition(0);
        bgsound->play();
    }
}



void MainWindow::on_settings_clicked()
{
    clicksound->play();
    settings_w = new settings(music, bgsound, music5, clicksound);
    QObject::connect(settings_w, &settings::backToMW, this, &MainWindow::reset);
    setCentralWidget(settings_w);
}


void MainWindow::extendslider(){
    int tempx=slider_w->x();
    int tempy=slider_w->y();
    slider_w->setRect(0,0,200,20);
    slider_w->setPos(tempx-50,tempy);
}
void MainWindow::sale(){
    coins= shop_w->coins;
    hugeball= shop_w->hugeball;
    fireball= shop_w->fireball;
    extension= shop_w->extension;
    weapons = shop_w-> weapons;
    delete shop_w;
}


