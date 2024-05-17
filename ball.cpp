#include "ball.h"
#include <QTimer>
#include "blocks.h"
#include "slider.h"
#include <QBrush>
#include <QPen>
#include <QTimer>
#include "health.h"
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
    fireball=false;
    slider_extended=false;
    number=no;
    reflection_cooldown = 0;
    music2 = new QAudioOutput;
    music2->setVolume(100);
    ballsound = new QMediaPlayer;
    ballsound->setAudioOutput(music2);
    ballsound->setSource(QUrl("qrc:/music/Resources/sliders.mp3"));
    music5 = new QAudioOutput;
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
        fireball = false;
    }
    if(x() >= 1200 - 15){
        xv = -1 * xv;
        fireball = false;
    }
    if(y() <= 0){
        yv = -1* yv;
        fireball = false;
    }
    if(y()>800){
        yv = 0;
        hl->decrease_health();
        fireball = false;
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
            if(!slider_extended){
                double centerball = x()+ 8;
                double centerslider = z->x() +50;
                double dx = centerball -centerslider;
                xv += dx;
                xv /= 16;
                yv = -1 * yv;
            }
            else{
                double centerball = x()+ 8;
                double centerslider = z->x() +100;
                double dx = centerball -centerslider;
                xv += dx;
                xv /= 16;
                yv = -1 * yv;
            }
            acc=0;
            fireball=false;
        }
    }
}
void ball::collide(){
    if(reflection_cooldown){
        reflection_cooldown--;
        return;
    }
    if(hl->gethealth()<=0){
        emit lose();
        return;
    }
    QList<QGraphicsItem*> cItems = collidingItems();
    for(int i = 0; i< cItems.count(); i++){
        blocks * u = dynamic_cast<blocks *>(cItems[i]);
        if(u){
            if(collidingItems().contains(u->surroundings[0]) || collidingItems().contains(u->surroundings[2])){
                if(!fireball)yv *= -1;
                else{
                    if(u->type==2){
                        fireball=false;
                        yv*=-1;
                    }
                }
            }
            if(collidingItems().contains(u->surroundings[1]) || collidingItems().contains(u->surroundings[3])){
                if(!fireball)xv *= -1;
                else{
                    if(u->type==2){
                        fireball=false;
                        xv*=-1;
                    }
                }
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
                return;
            }
            break;
        }
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
void ball:: activefire(){
    fireball=true;
}
void ball:: activeextending(){
    slider_extended=true;
}
