#include <iostream>

#ifndef tuippH
#define tuippH
namespace tuipp
{
  class screen
  {
  private:
    const unsigned int screenID;
    const std::string screenName;
  public:
    screen(const unsigned int screenID, const char* screenName);
  };

unsigned int screenID_build();

}

#endif
