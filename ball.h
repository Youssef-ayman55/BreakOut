#ifndef BALL_H
#define BALL_H
#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsEllipseItem>
class ball : public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
public:
    ball();
public slots:
    void move(bool right, bool up, int speed);
};

#endif // BALL_H
