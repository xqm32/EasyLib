#pragma once

#include <iostream>
#include "macro.h"
#include "getbefore.h"
#include "getignore.h"

/*
 *	Author: xqm32	Date: 5/8/18
 *	File: ./getrange.h
 */

int getrange(std::istream&, std::string&, const int&, const int&);
int getrange(std::istream&, std::string&, const std::string&, const std::string&);

int getranges(std::istream&, std::string&, const int&, const int&);
int getranges(std::istream&, std::string&, const std::string&, const std::string&);