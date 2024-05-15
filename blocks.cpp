#include "blocks.h"
#include <QBrush>
#include <QPen>
#include <cstdlib>
#include <QColor>
#include <QVector>
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
