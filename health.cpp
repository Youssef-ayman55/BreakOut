#include "health.h"
#include <QFont>
health::health() {
    heal=3;
    setPlainText(QString("Health: ") + QString::number(heal));
    setDefaultTextColor(Qt::white);

    setFont(QFont("times", 16));
}

void health::decrease_health()
{
    heal--;
    setPlainText(QString("Health: ") + QString::number(heal));
}

int health::gethealth()
{
    return heal;
}
health::~health(){

}


