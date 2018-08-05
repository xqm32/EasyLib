#pragma once

#include <cstdlib>
#include <ctime>

/*
 *	Author: xqm32	Date: 4/8/18
 *	File: ./rangedom.h
 */

int init_rangedom();
int init_rangedom(const int &_seed);

int rangedom();
int rangedom(const int &_first, const int &_second);