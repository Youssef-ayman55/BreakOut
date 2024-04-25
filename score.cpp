#include "score.h"
#include <QFont>
score::score() {
    score_val=0;
    setPlainText(QString("Health: ") + QString::number(score_val));
    setDefaultTextColor(Qt::white);
    setFont(QFont("times", 16));
}


void score::increase_score()
{
    score_val++;
    setPlainText(QString("Score: ") + QString::number(score_val));
}

int score::getscore()
{
    return score_val;
}
