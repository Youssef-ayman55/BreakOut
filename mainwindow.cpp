#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "blocks.h"
#include <QGraphicsView>
#include <QWidget>
#include <QTimer>
#include "ball.h"
#include "win.h"

#include <QGraphicsScene>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_new_game_clicked()
{
    level = new levels;
    QObject::connect(level,&levels::back,this,&MainWindow::reset);
    QObject::connect(level,&levels::level1,this,&MainWindow::startlevel1);
    QObject::connect(level,&levels::level2,this,&MainWindow::startlevel2);
    QObject::connect(level,&levels::level3,this,&MainWindow::startlevel3);
    QObject::connect(level,&levels::level4,this,&MainWindow::startlevel4);
    QObject::connect(level,&levels::level5,this,&MainWindow::startlevel5);
    setCentralWidget(level);
}
void MainWindow::reset(){
    ui->setupUi(this);
    delete level;
}
void MainWindow::startlevel1(){
    scene = new QGraphicsScene;
    view = new QGraphicsView;
    player = new slider;
    scene->setSceneRect(0,0,1200,800);
    scene->addItem(player);
    player->setPos(550,750);
    view->setFixedSize(1200,800);
    balling = new ball(12*4);
    balling->setPos(592.5, 710);
    scene->addItem(balling);
    balling->setup();
    QObject::connect(balling,&ball::win,this,&MainWindow::displaywin);
    QObject::connect(balling,&ball::lose,this,&MainWindow::displaylose);
    blocks *arr[12][5];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = new blocks();
            arr[i][j]->setRect(i*102, j*52 +50, 100,50);
            scene->addItem(arr[i][j]);
        }
    }
    view->setScene(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    //delete level;
    setCentralWidget(view);
}
void MainWindow::startlevel2(){

}
void MainWindow::startlevel3(){

}
void MainWindow::startlevel4(){

}
void MainWindow::startlevel5(){

}
void MainWindow:: backtolevelsfromwin(){
    delete winning;
    level = new levels;
    setCentralWidget(level);
    QObject::connect(level,&levels::back,this,&MainWindow::reset);

}
void MainWindow:: retrylevel1(){
    delete losing;
    startlevel1();
}
void MainWindow:: backtolevelsfromlose(){
    delete losing;
    level = new levels;
    setCentralWidget(level);
    QObject::connect(level,&levels::back,this,&MainWindow::reset);

}
void MainWindow::displaywin(){
    delete balling;
    delete player;
    delete view;
    delete scene;
    winning = new win;
    setCentralWidget(winning);
    QObject::connect(winning,&win::backtolevels,this,&MainWindow::backtolevelsfromwin);

}
void MainWindow::displaylose(){
    delete balling;
    delete player;
    delete view;
    delete scene;
    losing = new lose;
    setCentralWidget(losing);
    QObject::connect(losing,&lose::backtolevels,this,&MainWindow::backtolevelsfromlose);
    QObject::connect(losing,&lose::retry,this,&MainWindow::retrylevel1);
}
