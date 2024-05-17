#ifndef SETTINGS_H
#define SETTINGS_H
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QWidget>

namespace Ui {
class settings;
}

class settings : public QWidget
{
    Q_OBJECT

public:
    QAudioOutput *music;
    QMediaPlayer *bgsound;
    QAudioOutput *music5;
    QMediaPlayer *clicksound;
    explicit settings(QWidget *parent = nullptr);
    settings(QAudioOutput *music , QMediaPlayer *bgsound, QAudioOutput * music5, QMediaPlayer * clicksound);
    ~settings();

signals:
    void backToMW();

private slots:
    void on_bgvolume_clicked();
    void on_back_3_clicked();

    void on_bgslider_valueChanged(int value);

    void on_backM_clicked();

    void on_effects_valueChanged(int value);

private:
    Ui::settings *ui;
    bool IS_Muted=false;
    bool IS_Muted2=false;
};

#endif // SETTINGS_H
