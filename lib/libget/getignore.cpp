#include "getignore.h"

/*
 *	Author: xqm32	Date: 5/8/18
 *	File: ./getignore.cpp
 */

int getignore(std::istream &_is, const std::size_t &_num)
{
	for (auto _i=0; _i<_num&&(_is.get()!=LIBGET_EOF); ++_i);
	return _num;
}

int getignore(std::istream &_is, const int &_par)
{
	for (int _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF;)
		if (_i==_par) return _i;
	return LIBGET_EOF;
}
int getignore(std::istream &_is, const std::string &_par)
{
	for (int _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF;)
		for (auto &_j: _par)
			if (_i==_j) return _i;
	return LIBGET_EOF;
}

int getignores(std::istream &_is, const int &_par)
{
	for (int _i=LIBGET_EOF; (_i=_is.get())!=LIBGET_EOF;)
		if (_i==_par) return _i;
	return LIBGET_EOF;
}
int getignores(std::istream &_is, const std::string &_par)
{
	auto _par_len=_par.length();
	for (int _i=LIBGET_EOF; _i=getignores(_is, _par[0])!=LIBGET_EOF;)
		for (auto _j=1; _j<_par_len&&(_i=_is.get())!=LIBGET_EOF; ++_j)
			if (static_cast<char>(_i)!=_par[_j]) break;
			else if (_j==_par_len-1) return _par[_j];
	return LIBGET_EOF;
}