#ifndef BALL_H
#define BALL_H
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsEllipseItem>
class ball : public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
private:
    int yv;
    int xv;
public:
    ball();
public slots:
    void move();
};

#endif // BALL_H
