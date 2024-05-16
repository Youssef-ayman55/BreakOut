#include "ball.h"
#include <QTimer>
#include "blocks.h"
#include "slider.h"
#include <QBrush>
#include <QPen>
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
    QTimer * time = new QTimer();
    QObject::connect(time, SIGNAL(timeout()),this, SLOT(move()));
    time->start(15);
    xv = 0;
    yv = 5;
    number=no;
    reflection_cooldown = 0;
    QAudioOutput *music2 = new QAudioOutput;
    music2->setVolume(100);
    ballsound = new QMediaPlayer;
    ballsound->setAudioOutput(music2);
    ballsound->setSource(QUrl("qrc:/music/Resources/slidderh.mp3"));

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
        yv = -5;
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
        }
    }
    for(int i = 0; i< cItems.count(); i++){
        blocks * u = dynamic_cast<blocks *>(cItems[i]);
        if(u){
            double ballx = pos().x() + 8;
            double bally = pos().y() + 8;
            double blockx = u->pos().x() + 10;
            double blocky = u->pos().y() + 10;
            if(bally == blocky){
                xv*=-1;
            }else if(ballx==blockx){
                yv*=-1;
            }else if(bally>blocky){
                if(bally<blocky+20){
                    xv*=-1;
                }else if(bally==blocky+20){
                    xv*=-1;
                    yv*=-1;
                }
                else{
                    yv*=-1;
                }
            }else if(blocky>bally){
                if(bally+16>blocky){
                    xv*=-1;
                }else if(bally+16==blocky){
                    xv*=-1;
                    yv*=-1;
                }
                else{
                    yv*=-1;
                }
            }
            if(u->type==1)
            {
                scr->increase_score();
                blocksound->play();
                delete u;
            }
            if(scr->getscore() == number){
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
ball:: ~ball(){
    delete hl;
    delete scr;
}

