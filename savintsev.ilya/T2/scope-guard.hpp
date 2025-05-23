#ifndef SCOPE_GUARD_HPP
#define SCOPE_GUARD_HPP
#include <iostream>

namespace savintsev
{
  class ScopeGuard
  {
  public:
    explicit ScopeGuard(std::basic_ios< char > & s);
    ~ScopeGuard();
  private:
    std::basic_ios< char > & s_;
    std::streamsize width_;
    char fill_;
    std::streamsize precision_;
    std::basic_ios< char >::fmtflags fmt_;
  };
}

#endif
