#ifndef STEINERTHREAD_H
#define STEINERTHREAD_H
// convinent class as a thin layer over QThread, usually to be dereived from
#include <QThread>

class SteinerThread : public QThread
{
private:
    bool running;
protected:
    void run();

public:
    SteinerThread();
    void stop();

    void start ( Priority priority ) ;

};

#endif // STEINERTHREAD_H
