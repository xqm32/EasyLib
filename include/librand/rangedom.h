#pragma once

#include <cstdlib>
#include <ctime>

int init_rangedom();
int init_rangedom(const int &_seed);

int rangedom();
int rangedom(const int &_first, const int &_second);