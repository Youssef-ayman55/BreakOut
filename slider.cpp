#include "slider.h"
#include "QKeyEvent"
#include <QBrush>
#include <QPen>
slider::slider() {
    setRect(0, 0,100, 20);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::black);
    setBrush(brush);
    QPen pen;
    pen.setWidth(1);
    pen.setColor(Qt::black);
    setPen(pen);
}
void slider::keyPressEvent(QKeyEvent * event){
    if(event->key()== Qt::Key_Left)
    {
        if(x()>0)
        {
            for(int i = 0; i < 16; i++){
                setPos(x()-2.5,y());
            }
        }
    }
    else if(event->key()== Qt::Key_Right)

    {
        if(x()+100<1200){
            for(int i = 0; i < 16; i++){
                setPos(x()+2.5,y());
            }
        }
    }
}
