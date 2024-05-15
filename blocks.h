#ifndef BLOCKS_H
#define BLOCKS_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
class blocks : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    blocks(int t);
    int type;
private:
    int score_val;
    QGraphicsTextItem * score;
public slots:
};

#endif // BLOCKS_H
