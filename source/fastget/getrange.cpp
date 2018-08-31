#include "../../include/fastget/getrange.h"

int getrange(std::istream &_is, std::string &_str, const int &_first, const int &_second)
{
	getignore(_is, _first);
	return getbefore(_is, _str, _second);
}
int getrange(std::istream &_is, std::string &_str, const std::string &_first, const std::string &_second)
{
	getignore(_is, _first);
	return getbefore(_is, _str, _second);
}

int getranges(std::istream &_is, std::string &_str, const int &_first, const int &_second)
{
	getignores(_is, _first);
	return getbefores(_is, _str, _second);
}
int getranges(std::istream &_is, std::string &_str, const std::string &_first, const std::string &_second)
{
	getignores(_is, _first);
	return getbefores(_is, _str, _second);
}