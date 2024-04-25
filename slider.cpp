#include "slider.h"
#include "QKeyEvent"
slider::slider() {
    setRect(500, 750,100, 20);
    score_val = 0;
    score->setPlainText(QString::number(score_val));
}
void slider::keyPressEvent(QKeyEvent * event){
    if(event->key()== Qt::Key_Left)
    {
        if(x()>0)
        {
            setPos(x()-10,y());
        }
    }
    else if(event->key()== Qt::Key_Right)

    {
        if(x()+100<1200)
            setPos(x()+10,y());
    }
}
