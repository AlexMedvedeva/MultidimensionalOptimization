#pragma once

class Object
{
  virtual Object* create(int n = 1) = 0;
  virtual bool operator== (const Object &element) const = 0;
};
