#ifndef SCORE_H
#define SCORE_H
#include <QGraphicsTextItem>
class score : public QGraphicsTextItem
{
public:
    int score_val;
public:
    score();
    ~score();
public slots:
    void increase_score(int x);
    int getscore();
};


#endif // SCORE_H
