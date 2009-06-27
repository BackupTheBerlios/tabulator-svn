#include "steinerthread.h"

SteinerThread::SteinerThread()
{
    running = false;
}
void SteinerThread::run(){
    running = true;
}
void SteinerThread::stop(){
    running = false;
}

void SteinerThread::start ( Priority priority = InheritPriority ) {
    QThread::start ( priority ) ;
    running = true;
}
