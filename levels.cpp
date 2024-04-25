#include "levels.h"
#include "ui_levels.h"
levels::levels(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::levels)
{
    ui->setupUi(this);
}

levels::~levels()
{
    delete ui;
}

void levels::on_back_clicked()
{
    emit back();
}


void levels::on_level1_clicked()
{
    emit level1();
}

void levels::on_level2_clicked()
{
    emit level2();
}



void levels::on_level3_clicked()
{
        emit level3();
}


void levels::on_level4_clicked()
{
        emit level4();
}


void levels::on_level5_clicked()
{
        emit level5();
}

