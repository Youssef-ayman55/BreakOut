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
    emit click();
    emit back();
    delete this;
}


void levels::on_level1_clicked()
{
    emit click();
    emit level1();
    delete this;
}

void levels::on_level2_clicked()
{
    emit click();
    emit level2();
    delete this;
}



void levels::on_level3_clicked()
{
    emit click();
    emit level3();
    delete this;
}


void levels::on_level4_clicked()
{
    emit click();
    emit level4();
    delete this;
}


void levels::on_level5_clicked()
{
    emit click();
    emit level5();
    delete this;
}

