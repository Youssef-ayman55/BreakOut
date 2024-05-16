#ifndef WIN_H
#define WIN_H
#include<QMediaPlayer>
#include <QAudioOutput>
#include <QWidget>

namespace Ui {
class win;
}

class win : public QWidget
{
    Q_OBJECT

public:
    explicit win(QWidget *parent = nullptr);
    ~win();
    QAudioOutput *music3;
    QMediaPlayer *winsound;
signals:
    void backtolevels();

private slots:
    void on_back_2_clicked();

    void on_back_clicked();

private:
    QAudioOutput *music7;
    QMediaPlayer *clicksound;
    Ui::win *ui;

};

#endif // WIN_H
