#ifndef SLIDER_H
#define SLIDER_H

#include <QObject>
#include <QGraphicsRectItem>>
#include <QGraphicsTextItem>
class slider : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    slider();
private:
    int score_val;
    QGraphicsTextItem * score;
public slots:
    void keyPressEvent(QKeyEvent * event);
};

#endif // SLIDER_H
