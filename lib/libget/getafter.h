#pragma once

#include <iostream>
#include "macro.h"
#include "getignore.h"

/*
 *	Author: xqm32	Date: 5/8/18
 *	File: ./getafter.h
 */

int getafter(std::istream&, std::string&, const int&);
int getafter(std::istream&, std::string&, const std::string&);

int getafters(std::istream&, std::string&, const int&);
int getafters(std::istream&, std::string&, const std::string&);