#include "Log.h"
#include <fstream>
#include <cstdarg>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <assert.h>
#include <iostream>
#include <string.h>
#include <Windows.h>

using namespace System::Windows::Forms;

Log sLog;

Log::Log()
{
}

Log::~Log()
{
}

void Log::SendLog(char const *log, LogType logType)
{
    if (!log)
        return;

    if (logType == NORMAL)
    {
        System::String^ StringLog = gcnew System::String(log);
        MessageBox::Show(StringLog);
    }
    else if (logType == EXCEPTION)
    {
        std::exception(log);
    }
}

void Log::outError(char const* error, ...)
{
    if (!error)
        return;

    va_list ap;
    char szQuery[MAX_QUERY_LEN];
    va_start(ap, error);
    vsnprintf_s(szQuery, MAX_QUERY_LEN, error, ap);
    va_end(ap);

    SendLog(szQuery);
}