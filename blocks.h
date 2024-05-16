#ifndef BLOCKS_H
#define BLOCKS_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QVector>
class blocks : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    blocks(int t);
    ~blocks();
    int type;
    QVector<QGraphicsRectItem *> surroundings;
    void setup(QGraphicsScene *);
private:
    int score_val;
    QGraphicsTextItem * score;
public slots:
};

#endif // BLOCKS_H
