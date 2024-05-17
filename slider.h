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
    slider(int extension, int weapons);
    QTimer * timer;
    bool right;
    bool left;
    bool slider_extended;
    int weapons;
    int v;
    int extension;
signals:
    void start();
    void fire();
    void extends();
    void huge();
    void laser();
    void increase_score();

public slots:
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent * event);
    void move();

};

#endif // SLIDER_H
