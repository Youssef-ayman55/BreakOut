#include "mainwindow.h"
#include "global.h"
#include "settings.h"
#include "itemshop.h""
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //ItemShop s;
    w.show();
    //s.show();
    for(int i = 1; i < 5; i++){
        //unlocked_level[i] = false;
    }
    //unlocked_level[0] = true;
    return a.exec();
}
