#include "../include/tuipp.h"
#include <algorithm>

using namespace tuipp;

static unsigned int p = 0;

screen::screen(const unsigned int screenID, const char *screenName)
    : screenID(screenID), screenName(std::move(screenName)) {}

unsigned int screenID_build() { return p++; }
