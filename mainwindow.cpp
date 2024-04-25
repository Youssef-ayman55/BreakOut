#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsView>
#include <QWidget>
#include <QTimer>
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
    view->setScene(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    QTimer * time = new QTimer();
    QObject::connect(time, SIGNAL(timeout()),player,SLOT());
    time->start(2000);
    delete level;
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

