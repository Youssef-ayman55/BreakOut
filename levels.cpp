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

