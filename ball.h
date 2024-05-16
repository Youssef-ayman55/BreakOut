#ifndef BALL_H
#define BALL_H
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsEllipseItem>
#include "health.h"
#include "score.h"
#include <QMediaPlayer>
#include <QAudioOutput>
class ball : public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
private:
    int yv;
    int xv;
    int number;
    health * hl;
    score * scr;
    QAudioOutput *music2;
    QMediaPlayer *ballsound;
    QAudioOutput *music3;
    QMediaPlayer *winsound;
    QAudioOutput *music4;
    QMediaPlayer *losesound;
    QAudioOutput *music6;
    QMediaPlayer *blocksound;

public:
    ball(int no);
    void setup();
    ~ball();
public slots:
    void move();
signals:
    void win();
    void lose();
};

#endif // BALL_H
