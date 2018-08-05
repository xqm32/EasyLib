#pragma once

#include <thread>
#include <chrono>

/*
 *	Author: xqm32	Date: 4/8/18
 *	File: ./threadsv.h
 */

enum timer
{
	nanoseconds, microseconds, milliseconds, seconds, minutes, hours
};

void sleep_for(const int &_time, const timer &_timer);