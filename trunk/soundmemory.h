#ifndef SOUNDMEMORY_H
#define SOUNDMEMORY_H

#include "steinerthread.h"
#include <QMessageBox>
 #include <QSqlDatabase>
 #include <QSqlError>
 #include <QSqlQuery>


class SoundMemory : public SteinerThread
{
public:
    SoundMemory();
    void run();
};

#endif // SOUNDMEMORY_H
