#include "lib/libget.h"
#include "lib/librd.h"
#include "lib/libtsv.h"

/*
 *	Author: xqm32	Date: 5/8/18
 *	File: ./main.cpp
 */

int main()
{
	std::string str="-\\|/";
	for (;;)
		for (const auto &i: str)
		{
			std::cout<<i<<'\b'<<std::flush;
			sleep_for(100, milliseconds);
		}
}