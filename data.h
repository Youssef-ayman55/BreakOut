#ifndef DATA_H
#define DATA_H

#include <QGraphicsTextItem>
class data : public QGraphicsTextItem
{
private:
    int score;
    int health;
public:
    data();
public slots:
    void decrease_health();
    void increase_score();
    int getscore();
};

#endif // DATA_H
