#ifndef BALL_H
#define BALL_H
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsEllipseItem>
#include "health.h"
#include "score.h"
class ball : public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
private:
    int yv;
    int xv;
    int number;
    health * hl;
    score * scr;
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
