#pragma once

#include <iostream>
#include "macro.h"
#include "getignore.h"

int getafter(std::istream&, std::string&, const int&);
int getafter(std::istream&, std::string&, const std::string&);

int getafters(std::istream&, std::string&, const int&);
int getafters(std::istream&, std::string&, const std::string&);