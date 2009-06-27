#include <QtGui/QApplication>
#include "mainwindow.h"
#include "soundmemory.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SoundMemory Brain;
    MainWindow w;
    Brain.start(QThread::NormalPriority);
    w.show();
    return a.exec();
}
