#ifndef HEALTH_H
#define HEALTH_H
#include <QGraphicsTextItem>
class health: public QGraphicsTextItem
{
private:
    int heal;
public:
    health();
public slots:
    void decrease_health();
    int gethealth();
};

#endif // HEALTH_H


