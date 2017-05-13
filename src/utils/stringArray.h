#pragma once

#include "String.h"

struct StringArray
{
  size_t n;
  String* data;
  ~StringArray()
  {
      delete[] data;
      data = NULL;
  }
};
