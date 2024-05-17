#include "ball.h"
#include <QTimer>
#include "blocks.h"
#include "slider.h"
#include <QBrush>
#include <QPen>
#include "health.h"
#include <iostream>
#include "score.h"
#include <QGraphicsScene>
ball::ball(int no) {
    setRect(0,0, 16, 16);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::red);
    setBrush(brush);
    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::black);
    setPen(pen);
    colltime = new QTimer;
    QObject::connect(colltime, SIGNAL(timeout()),this, SLOT(collide()));
    colltime->start(1);
    time = new QTimer();
    QObject::connect(time, SIGNAL(timeout()),this, SLOT(move()));
    time->start(15);
    reflection_cooldown = 0;
    xv = 0;
    yv = 0;
    acc=0;
    des=0;
    number=no;
    reflection_cooldown = 0;
    QAudioOutput *music2 = new QAudioOutput;
    music2->setVolume(100);
    ballsound = new QMediaPlayer;
    ballsound->setAudioOutput(music2);
    ballsound->setSource(QUrl("qrc:/music/Resources/sliders.mp3"));
    QAudioOutput *music5 = new QAudioOutput;
    music5->setVolume(100);
    blocksound = new QMediaPlayer;
    blocksound->setAudioOutput(music5);
    blocksound->setSource(QUrl("qrc:/music/Resources/blockh.mp3"));


}
void ball::setup(){
    hl=new health();
    scr= new score();
    scene()->addItem(hl);
    scene()->addItem(scr);
}
void ball::move(){
    if(x() <= 0){
        xv = -1 * xv;
    }
    if(x() >= 1200 - 15){
        xv = -1 * xv;
    }
    if(y() <= 0){
        yv = -1* yv;
    }
    if(y()>800){
        yv = 0;
        hl->decrease_health();
        setPos(592.5, 710);
        xv = 0;
        yv = 0;
    }
    setPos(x() + xv, y() + yv);
    QList<QGraphicsItem*> cItems = collidingItems();
    for(int i = 0; i < cItems.count(); i++){
        slider * z = dynamic_cast<slider *>(cItems[i]);
        if(z){
            ballsound->play();
            double centerball = x()+ 8;
            double centerslider = z->x() +50;
            double dx = centerball -centerslider;
            xv += dx;
            xv /= 16;
            yv = -1 * yv;
            acc=0;
        }
    }
}
void ball::collide(){
    if(reflection_cooldown){
        reflection_cooldown--;
        return;
    }
    QList<QGraphicsItem*> cItems = collidingItems();
    for(int i = 0; i< cItems.count(); i++){
        blocks * u = dynamic_cast<blocks *>(cItems[i]);
        if(u){
            if(collidingItems().contains(u->surroundings[0]) || collidingItems().contains(u->surroundings[2])){
                yv *= -1;
            }
            if(collidingItems().contains(u->surroundings[1]) || collidingItems().contains(u->surroundings[3])){
                xv *= -1;
            }
            reflection_cooldown = 15;
            if(u->type==1)
            {
                scr->increase_score(++acc);
                des++;
                delete u;
            }
            blocksound->play();
            if(des == number){
                yv=0;
                xv=0;
                emit win();
            }
            break;
        }
    }
    if(hl->gethealth()<=0){
        emit lose();
    }
}
void ball::start(){
    if(yv == 0)
        yv = 5;
}
ball:: ~ball(){
    delete hl;
    delete scr;
    delete time;
    delete colltime;
}

