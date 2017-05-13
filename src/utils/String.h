#pragma once

struct String
{
  size_t n;
  char* data;
  ~String()
  {
    delete[] data;
    data = NULL;
  }
};