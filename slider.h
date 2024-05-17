#ifndef SLIDER_H
#define SLIDER_H

#include <QObject>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QKeyEvent>
#include "ball.h"
class slider : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    slider();
    QTimer * timer;
    bool right;
    bool left;
    bool slider_extended;
signals:
    void start();
    void fire();
    void extends();

public slots:
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent * event);
    void move();

};

#endif // SLIDER_H
