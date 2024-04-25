#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include "levels.h"
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
public slots:
    void reset();
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
};
#endif // MAINWINDOW_H
