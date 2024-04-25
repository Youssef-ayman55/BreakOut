#include "mainwindow.h"
#include "global.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    for(int i = 1; i < 5; i++){
        //unlocked_level[i] = false;
    }
    //unlocked_level[0] = true;
    return a.exec();
}
