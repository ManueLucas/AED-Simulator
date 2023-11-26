#ifndef LOGGER_H
#define LOGGER_H

#include "defs.h"
#include "QDateTime"
#include "QFile"
#include "QDir"
#include "QTextStream"

class Logger
{
public:
    Logger();
    void log(string message);
    virtual ~Logger();
private:
    QFile* activeFile;
    QDateTime* dateHandler;
    QTextStream outStream;

    void setup();
    void cleanup();
};

#endif // LOGGER_H