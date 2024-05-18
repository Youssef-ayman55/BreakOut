#ifndef LEVELS_H
#define LEVELS_H
#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QWidget>
namespace Ui {
class levels;
}

class levels : public QWidget
{
    Q_OBJECT

public:
    explicit levels(QWidget *parent = nullptr);
    explicit levels(int current_len);
    int current_level;
    QMainWindow * mainscreen;
    ~levels();
signals:
    void back();
    void level1();
    void level2();
    void level3();
    void level4();
    void level5();
    void click();
public slots:
    void on_back_clicked();

private slots:
    void on_level1_clicked();

    void on_level2_clicked();

    void on_level3_clicked();

    void on_level4_clicked();

    void on_level5_clicked();

private:
    QAudioOutput *music6;
    QMediaPlayer *clicksound;
    Ui::levels *ui;
};

#endif // LEVELS_H
