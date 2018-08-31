#include "../../include/fastthread/sleep.h"

void sleep_for(const int &_time, const timer &_timer)
{
	if (_timer == nanoseconds) std::this_thread::sleep_for(std::chrono::nanoseconds(_time));
	else if (_timer == microseconds) std::this_thread::sleep_for(std::chrono::microseconds(_time));
	else if (_timer == milliseconds) std::this_thread::sleep_for(std::chrono::milliseconds(_time));
	else if (_timer == seconds) std::this_thread::sleep_for(std::chrono::seconds(_time));
	else if (_timer == minutes) std::this_thread::sleep_for(std::chrono::minutes(_time));
	else if (_timer == hours) std::this_thread::sleep_for(std::chrono::hours(_time));
}