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
    displaylevels();
}
void MainWindow::reset(){
    ui->setupUi(this);
    delete levels_w;
}
void MainWindow::startlevel1(){
    scene = new QGraphicsScene;
    view = new QGraphicsView;
    slider_w = new slider;
    scene->setSceneRect(0,0,1200,800);
    scene->addItem(slider_w);
    slider_w->setPos(550,750);
    view->setFixedSize(1200,800);
    ball_w = new ball(12*4);
    ball_w->setPos(592.5, 710);
    scene->addItem(ball_w);
    ball_w->setup();
    QObject::connect(ball_w,&ball::win,this,&MainWindow::displaywin);
    QObject::connect(ball_w,&ball::lose,this,&MainWindow::displaylose);
    blocks *arr[12][5];
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 4; ++j) {
            arr[i][j] = new blocks();
            arr[i][j]->setRect(i * 102, j * 52 + 50, 100,50);
            scene->addItem(arr[i][j]);
        }
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
void MainWindow::startlevel2(){

}
void MainWindow::startlevel3(){

}
void MainWindow::startlevel4(){

}
void MainWindow::startlevel5(){

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
}
