#include "blocks.h"
#include <QBrush>
#include <QPen>
#include <cstdlib>
#include <QColor>
#include <QVector>
#include <QGraphicsScene>
blocks::blocks(int t) {
    if(t==1){
        QVector<QColor> colors={Qt::cyan, Qt::yellow, Qt::blue, Qt::magenta, Qt::gray, Qt::green};
        QBrush brush;
        brush.setStyle(Qt::SolidPattern);
        brush.setColor(colors[rand()%6]);
        setBrush(brush);
        QPen pen;
        pen.setWidth(1);
        pen.setColor(Qt::black);
        setPen(pen);
    }
    else{
        QBrush brush;
        brush.setStyle(Qt::SolidPattern);
        brush.setColor(Qt::black);
        setBrush(brush);
        QPen pen;
        pen.setWidth(1);
        pen.setColor(Qt::black);
        setPen(pen);
    }
    type=t;
}
void blocks::setup(QGraphicsScene * scene){
    for(int i = 0; i < 4; i++){
        QGraphicsRectItem * temp = new QGraphicsRectItem;
        surroundings.push_back(temp);
    }
    surroundings[0]->setRect(x() +5, y() + 25, 10, 30);
    surroundings[1]->setRect(x() +25, y() + 5, 30, 10);
    surroundings[2]->setRect(x() + 5, y() - 25, 10, 30);
    surroundings[3]->setRect(x() - 25, y() + 5, 30, 10);
    QPen pen;
    pen.setColor(Qt::transparent);
    pen.setWidth(0);
    for(int i= 0; i < 4; i++){
        surroundings[i]->setPen(pen);
        scene->addItem(surroundings[i]);
    }
}
blocks::~blocks(){
    for(int i= 0; i < 4; i++){
        delete surroundings[i];
    }
}
