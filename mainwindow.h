#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ball.h"
#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "levels.h"
#include "slider.h"
#include "win.h"
#include "lose.h"
#include <QAudioOutput>
#include <QMediaPlayer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void handleMediaStatusChanged(QMediaPlayer::MediaStatus status);

private slots:
    void on_new_game_clicked();
    void retrylevel1();
    void displaylevels();
    void start(int x);
public slots:
    void reset();
    void displaywin();
    void displaylose();
    void startlevel1();
    void startlevel2();
    void startlevel3();
    void startlevel4();
    void startlevel5();

private:
    Ui::MainWindow * ui;
    QGraphicsView * view;
    QGraphicsScene * scene;
    levels * levels_w;
    slider * slider_w;
    ball * ball_w;
    win * win_w;
    lose * lose_w;
    QAudioOutput *music;
    QMediaPlayer *bgsound;
    QAudioOutput *music5;
    QMediaPlayer *clicksound;
};
#endif // MAINWINDOW_H
