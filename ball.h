#ifndef BALL_H
#define BALL_H
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsEllipseItem>
#include "health.h"
#include "score.h"
#include <QTimer>
#include <QMediaPlayer>
#include <QAudioOutput>
class ball : public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
private:
    int yv;
    int xv;
    int number;
    int acc;
    int des;
    bool fireball;
    bool slider_extended;
    health * hl;
    score * scr;

    QAudioOutput *music3;
    QMediaPlayer *winsound;
    QAudioOutput *music4;
    QMediaPlayer *losesound;
    QAudioOutput *music5;

    QAudioOutput *m2;
    QMediaPlayer *ballsound;
    QAudioOutput *m6;
    QMediaPlayer *blocksound;

    QTimer * colltime = new QTimer;
    QTimer * time = new QTimer;
    int reflection_cooldown;

public:
    ball(int no, QMediaPlayer *ball,QAudioOutput *m2, QMediaPlayer *brick , QAudioOutput *m6);
    void setup();
    ~ball();
public slots:
    void move();
    void collide();
    void start();
    void activefire();
    void activeextending();
signals:
    void win();
    void lose();
};

#endif // BALL_H
