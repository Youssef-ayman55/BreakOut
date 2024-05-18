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
    bool paused;
    slider(int extension, int weapons);
    ~slider();
    QTimer * timer;
    bool right;
    bool left;
    bool slider_extended;
    int weapons;
    int v;
    int extension;
    QGraphicsTextItem * instructions;
signals:
    void start();
    void fire();
    void extends();
    void huge();
    void laser();
    void increase_score();
    void back();
    void pause();
    void cont();

public slots:
    void keyPressEvent(QKeyEvent * event);
    void keyReleaseEvent(QKeyEvent * event);
    void move();

};

#endif // SLIDER_H
