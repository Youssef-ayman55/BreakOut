#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
class score : public QGraphicsTextItem
{
public:
    int score_val;
public:
    score();
public slots:
    void increase_score();
    int getscore();
};


#endif // SCORE_H
