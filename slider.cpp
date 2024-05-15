#include "slider.h"
#include "QKeyEvent"
#include <QBrush>
#include <QPen>
slider::slider() {
    setRect(0, 0,100, 20);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBrush(brush);
    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::black);
    setPen(pen);
    timer = new QTimer;
    QObject::connect(timer, SIGNAL(timeout()),this, SLOT(move()));
    timer->start(3);
    right = false;
    left = false;
}
void slider::keyPressEvent(QKeyEvent * event){
    if(event->type() == QEvent::KeyPress){
        if(event->key()== Qt::Key_Left)
        {
            left = true;
            right = false;
        }
        else if(event->key()== Qt::Key_Right)
        {
            right = true;
            left = false;
        }
    }
}
void slider::keyReleaseEvent(QKeyEvent * event){
    if (event->type() == QEvent::KeyRelease){
        if(event->key()== Qt::Key_Left)
        {
            left = false;
        }
        else if(event->key()== Qt::Key_Right)
        {
            right = false;
        }
    }
}

void slider::move(){
    if(left){
        setPos(x()-1,y());
    }
    else if(right){
        setPos(x()+1,y());
    }
}
