#ifndef LOSE_H
#define LOSE_H

#include <QWidget>
#include <QAudioOutput>
#include <QMediaPlayer>

namespace Ui {
class lose;
}

class lose : public QWidget
{
    Q_OBJECT

public:
    explicit lose(QWidget *parent = nullptr);
    ~lose();
    QAudioOutput *music4;
    QMediaPlayer *losesound;
signals:
    void retry();
    void backtolevels();
private slots:
    void on_back_clicked();

    void on_back_2_clicked();

private:
    QAudioOutput *music8;
    QMediaPlayer *clicksound;
    Ui::lose *ui;
};

#endif // LOSE_H
