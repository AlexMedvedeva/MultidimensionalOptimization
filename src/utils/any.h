#pragma once

#include <typeinfo>
#include <stdexcept>

class Any 
{

private:

  struct absrtact_container {
    virtual ~absrtact_container() {};
    virtual const std::type_info& getType() const = 0;
    virtual absrtact_container * clone() const = 0;
  };

  template <typename T>
  struct container_impl : absrtact_container
  {
    T _t;
    container_impl(const T& t): _t(t) {}
    const std::type_info& getType() const { return typeid(T); }
    virtual absrtact_container * clone() const { return new container_impl(_t); }
  };

  absrtact_container * _universal;

public:

  Any() : _universal(nullptr) {}
  template <typename T>
  Any(const T& t) : _universal(new container_impl<T>(t)) {}
  Any& operator = (const Any& other)
  {
    if (other._universal)
      _universal = other._universal->clone();
    else
      _universal = nullptr;
    return *this;
  }
  Any(const Any& other)
  {
    if (other._universal)
      _universal = other._universal->clone();
    else
      _universal = nullptr;
  }
  ~Any() { delete _universal; }
  const std::type_info& getType() const { return _universal->getType(); }
  bool empty() const { return !_universal; }

  template <typename T>
  T& cast() const {
    ContainerImpl<T>* containerImpl = dynamic_cast<ContainerImpl<T>*>(container);
    if (!containerImpl)
      throw BadCast();
    return containerImpl->value;
  }

  template <typename T>
  const T& cast() const {
    ContainerImpl<T>* containerImpl = dynamic_cast<ContainerImpl<T>*>(container);
    if (!containerImpl)
      throw BadCast();
    return containerImpl->value;
  }

};