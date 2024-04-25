#ifndef SLIDER_H
#define SLIDER_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
class blocks : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    blocks(int x, int y);
private:
    int score_val;
    QGraphicsTextItem * score;
public slots:
};

#endif // SLIDER_H
