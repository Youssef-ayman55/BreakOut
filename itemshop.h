#ifndef ITEMSHOP_H
#define ITEMSHOP_H

#include <QWidget>
#include <QMediaPlayer>
#include <QAudioOutput>

namespace Ui {
class ItemShop;
}

class ItemShop : public QWidget
{
    Q_OBJECT

public:
    explicit ItemShop(QWidget *parent = nullptr);
    ItemShop(QAudioOutput * music5, QMediaPlayer * clicksound, int coins, int fireball, int hugeball, int weapons, int extension);
    ~ItemShop();
    int coins;
    int fireball;
    int hugeball;
    int weapons;
    int extension;
signals:
    void back();
    void shop_window();
    void sale();
private slots:
    void on_backM_clicked();

    void on_addf_clicked();

    void on_sellf_clicked();

    void on_addH_clicked();

    void on_sellH_clicked();

    void on_addW_clicked();

    void on_sellW_clicked();

    void on_addS_clicked();

    void on_sellS_clicked();

private:
    Ui::ItemShop *ui;
    QAudioOutput *music5;
    QMediaPlayer *clicksound;
};

#endif // ITEMSHOP_H
