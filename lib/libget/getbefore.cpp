#include "../../include/libget/getbefore.h"

int getbefore(std::istream &_is, std::string &_str, const int &_par)
{
	for (int _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF; _str+=static_cast<char>(_i))
		if (_i==_par) return _i;
	return LIBGET_EOF;
}
int getbefore(std::istream &_is, std::string &_str, const std::string &_par)
{
	for (int _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF; _str+=static_cast<char>(_i))
		for (auto &_j: _par)
			if (_i==_j) return _i;
	return LIBGET_EOF;
}

int getbefores(std::istream &_is, std::string &_str, const int &_par)
{
	for (int _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF; _str+=static_cast<char>(_i))
		if (_i==_par) return _i;
	return LIBGET_EOF;
}
int getbefores(std::istream &_is, std::string &_str, const std::string &_par)
{
	auto _par_len=_par.length();
	for (int _i=LIBGET_EOF; _i=getbefores(_is, _str, _par[0])!=LIBGET_EOF;)
		for (auto _j=1; _j<_par_len&&(_i=_is.get())!=LIBGET_EOF; ++_j)
			if (static_cast<char>(_i)!=_par[_j]) { _str+=_par.substr(0,_j); _str+=_i; break; }
			else if (_j==_par_len-1) return _par[_j];
	return LIBGET_EOF;
}