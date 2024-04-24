#ifndef LEVELS_H
#define LEVELS_H
#include <QMainWindow>
#include <QWidget>
namespace Ui {
class levels;
}

class levels : public QWidget
{
    Q_OBJECT

public:
    explicit levels(QWidget *parent = nullptr);
    QMainWindow * mainscreen;
    ~levels();
signals:
    void back();
public slots:
    void on_back_clicked();

private:
    Ui::levels *ui;
};

#endif // LEVELS_H
