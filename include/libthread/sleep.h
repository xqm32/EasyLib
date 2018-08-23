#pragma once

#include <thread>
#include <chrono>

enum timer
{
	nanoseconds, microseconds, milliseconds, seconds, minutes, hours
};

void sleep_for(const int &_time, const timer &_timer);