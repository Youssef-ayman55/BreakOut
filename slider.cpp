#include "slider.h"
#include "QKeyEvent"
#include <QBrush>
#include <QPen>
#include "laser.h"
#include <QGraphicsScene>
slider::slider(int extension, int weapons) : extension(extension), weapons(weapons) {
    setRect(0, 0,100, 20);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::white);
    setBrush(brush);
    QPen pen;
    paused = false;
    pen.setWidth(1);
    pen.setColor(Qt::white);
    setPen(pen);
    timer = new QTimer;
    slider_extended=false;
    QObject::connect(timer, SIGNAL(timeout()),this, SLOT(move()));
    timer->start(3);
    right = false;
    left = false;
    v = 1;
    instructions = new QGraphicsTextItem;
    instructions->setPlainText(QString("HIT SPACE TO START! HOLD SHIFT FOR A SPEED BOOST!"));
    instructions->setPos(325,650);
    instructions->setDefaultTextColor(Qt::white);
    instructions->setFont(QFont("times", 16));

}
void slider::keyPressEvent(QKeyEvent * event){
    if(event->type() == QEvent::KeyPress){
        if(event->key()== Qt::Key_Left)
        {
            if(paused) return;
            left = true;
            right = false;
        }
        else if(event->key()== Qt::Key_Right)
        {
            if(paused) return;
            right = true;
            left = false;
        }
        else if(event->key()== Qt::Key_Space) {
            if(paused){
                emit cont();
                paused = false;
            }
            emit start();
            if(instructions != nullptr)
            delete instructions;
            instructions = nullptr;
            return;
        }
        else if(event->key() == Qt::Key_Escape){
            if(paused){
                emit back();
                return;
            }
            paused = true;
            emit pause();
            if(instructions != nullptr) delete instructions;
            instructions = new QGraphicsTextItem;
            scene()->addItem(instructions);
            instructions->setPlainText(QString("HIT ESC AGAIN TO LEAVE GAME! HIT SPACE TO CONTINUE!"));
            instructions->setPos(340,650);
            instructions->setDefaultTextColor(Qt::white);
            instructions->setFont(QFont("times", 16));
        }
        else if(event->key()== Qt::Key_Z){
            if(paused) return;
            emit fire();
        }
        else if(event->key() == Qt::Key_Shift) v = 2;
        else if(event->key()== Qt::Key_C){
            if(paused) return;
            emit huge();
        }
        else if(event->key() == Qt::Key_V){
            if(paused) return;
            if(weapons <= 0) return;
            Laser * laser_ = new Laser;
            scene()->addItem(laser_);
            laser_->setPos(x()+ 25+12.5, y());
            weapons--;
            emit laser();
            QObject::connect(laser_, &Laser::increase_score, this, [=](){emit increase_score();});
        }
        else if(event->key()== Qt::Key_X){
            if(paused) return;
            if(!slider_extended && extension>0){
                emit extends();
                slider_extended=true;
            }

        }
    }
}
void slider::keyReleaseEvent(QKeyEvent * event){
    if(paused) return;
    if (event->type() == QEvent::KeyRelease){
        if(event->key()== Qt::Key_Left)
        {
            left = false;
        }
        else if(event->key()== Qt::Key_Right)
        {
            right = false;
        }
        else if(event->key() == Qt::Key_Shift) v = 1;
    }
}

void slider::move(){
    if(left){
        setPos(x()-v,y());
        if(slider_extended) setPos(x()-0.5,y());
    }
    else if(right){
        setPos(x()+v,y());
        if(slider_extended) setPos(x()+0.5,y());
    }
}
slider::~slider(){
    delete timer;
}
