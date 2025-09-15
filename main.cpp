#include "mainwindow.h"
#include <QApplication>

const float time_between_frames = .1;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    clock_t start_time = clock();
    while(true){
        a.processEvents();
        if(w.getGameRunning() && clock() - start_time >= time_between_frames * CLOCKS_PER_SEC){
            w.run();
            start_time = clock();
        }
        if(!w.getGameRunning()){
            break;
        }
    }

    return a.exec();
}


