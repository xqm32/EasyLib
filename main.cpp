#include "include/flget.h"
#include "include/flrand.h"
#include "include/flthread.h"

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