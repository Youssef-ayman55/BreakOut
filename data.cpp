#include "data.h"
#include <QFont>
data::data() {
    score=0;
    health=3;
    setPlainText(QString("Health: ") + QString::number(health));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times", 16));
}

void data::decrease_health()
{
    health--;
    setPlainText(QString("Health: ") + QString::number(health));
}
void data::increase_score()
{
    score++;
    setPlainText(QString("Score: ") + QString::number(score));
}

int data::getscore()
{
    return score;
}
