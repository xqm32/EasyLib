#include "../../include/libget/getafter.h"

int getafter(std::istream &_is, std::string &_str, const int &_par)
{
	int _re=getignore(_is, _par);
	for(auto _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF; _str+=static_cast<char>(_i));
	return _re;
}
int getafter(std::istream &_is, std::string &_str, const std::string &_par)
{
	int _re=getignore(_is, _par);
	for(auto _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF; _str+=static_cast<char>(_i));
	return _re;
}

int getafters(std::istream &_is, std::string &_str, const int &_par)
{
	int _re=getignores(_is, _par);
	for(auto _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF; _str+=static_cast<char>(_i));
	return _re;
}
int getafters(std::istream &_is, std::string &_str, const std::string &_par)
{
	int _re=getignores(_is, _par);
	for(auto _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF; _str+=static_cast<char>(_i));
	return _re;
}