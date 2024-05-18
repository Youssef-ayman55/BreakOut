#include "laser.h"
#include <QGraphicsScene>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include "blocks.h"


Laser::Laser(){
    setPixmap(QPixmap(":/images/Resources/bullet.png"));

    timer =new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
    timer->start(15);

}

void Laser:: move()
{

    QList<QGraphicsItem *> colliding_items =collidingItems();
    for(int i=0, n=colliding_items.size(); i<n; ++i){
        if(typeid(*(colliding_items[i]))==typeid(blocks)){
            blocks* temp = dynamic_cast<blocks*>(colliding_items[i]);
            if(temp->type == 1){
                emit increase_score();
            }
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }
    setPos(x(),y()-10);
    if(pos().y()+30<0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
Laser::~Laser(){
    delete timer;
}
