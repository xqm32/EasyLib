#include "include/fastget.h"
#include "include/fastrand.h"
#include "include/fastthread.h"

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