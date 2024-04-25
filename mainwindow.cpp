#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsView>
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
    setCentralWidget(level);
}
void MainWindow::reset(){
    ui->setupUi(this);
    delete level;
}

