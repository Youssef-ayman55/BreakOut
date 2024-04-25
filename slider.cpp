#include "slider.h"

slider::slider() {
    setRect(500, 750,100, 20);
    score_val = 0;
    score->setPlainText(QString::number(score_val));
}
void slider::keyPressEvent(QKeyEvent * event){

}
