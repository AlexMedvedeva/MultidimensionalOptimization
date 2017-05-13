#ifndef LOG_H_INCLUDED
#define LOG_H_INCLUDED

#include "StringArray.h"
#include "String.h"

class Log
{
public:

  ~Log();

  virtual String getLine(int idx);
  virtual void log(String& msg);
private:
  StringArray messages;
};

#endif // LOG_H_INCLUDED
