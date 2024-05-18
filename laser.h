#ifndef LASER_H
#define LASER_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsPixmapItem>
class Laser: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Laser();
    ~Laser();
    QTimer * timer;
signals:
    void increase_score();
public slots:
    void move();
};

#endif // BULLET_H
