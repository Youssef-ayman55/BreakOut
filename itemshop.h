#ifndef ITEMSHOP_H
#define ITEMSHOP_H

#include <QWidget>

namespace Ui {
class ItemShop;
}

class ItemShop : public QWidget
{
    Q_OBJECT

public:
    explicit ItemShop(QWidget *parent = nullptr);
    ~ItemShop();

private:
    Ui::ItemShop *ui;
};

#endif // ITEMSHOP_H
