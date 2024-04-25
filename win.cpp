#include "win.h"
#include "ui_win.h"

win::win(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::win)
{
    ui->setupUi(this);
}

win::~win()
{
    delete ui;
}

void win::on_back_2_clicked()
{
    emit backtolevels();
}

