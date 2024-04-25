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

private slots:
    void on_new_game_clicked();
    void backtolevelsfromwin();
    void backtolevelsfromlose();
    void retrylevel1();
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
    Ui::MainWindow *ui;
    QGraphicsView * view;
    QGraphicsScene * scene;
    levels * level;
    slider * player;
    ball * balling;
    win * winning;
    lose * losing;
};
#endif // MAINWINDOW_H
