#ifndef SLIDER_H
#define SLIDER_H

#include <QObject>
#include <QTimer>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QKeyEvent>
class slider : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    slider();
    QTimer * timer;
    bool right;
    bool left;
signals:
    void start();
public slots:
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent * event);
    void move();
};

#endif // SLIDER_H
