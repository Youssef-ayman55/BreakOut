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
#include "itemshop.h"
#include "settings.h"
#include <QAudioOutput>
#include <QMediaPlayer>
#include <QGraphicsTextItem>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QAudioOutput *music;
    QMediaPlayer *bgsound;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void handleMediaStatusChanged(QMediaPlayer::MediaStatus status);

private slots:
    void on_new_game_clicked();
    void retrylevel1();
    void displaylevels();
    void start(int x);
    void on_settings_clicked();
    void displayshop();
    void on_itemshop_clicked();

    public slots:
    void extendslider();
    void reset();
    void displaywin();
    void displaylose();
    void startlevel1();
    void startlevel2();
    void startlevel3();
    void startlevel4();
    void startlevel5();
    void sale();
    void update();
private:
    Ui::MainWindow * ui;
    QGraphicsView * view;
    QGraphicsScene * scene;
    levels * levels_w;
    slider * slider_w;
    ball * ball_w;
    win * win_w;
    lose * lose_w;
    ItemShop * shop_w;
    settings *settings_w;

    QAudioOutput *music5;
    QMediaPlayer *clicksound;

    QAudioOutput *music2;
    QMediaPlayer *ballsound;
    QAudioOutput *music6;
    QMediaPlayer *blocksound;
    int coins;
    int current_level;
    int fireball;
    int hugeball;
    int weapons;
    int extension;
    QGraphicsTextItem* abilities;
};
#endif // MAINWINDOW_H
