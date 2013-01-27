#ifndef LOG_SYSTEM_H
#define LOG_SYSTEM_H

#define MAX_QUERY_LEN 1024

enum LogType
{
    NORMAL          = 0,
    EXCEPTION       = 1
};

class Log
{
public:
    Log();
    virtual ~Log();

    void SendLog(char const *log, LogType logType=NORMAL);

    void outError(char const *error, ...);
};

extern Log sLog;

#endif