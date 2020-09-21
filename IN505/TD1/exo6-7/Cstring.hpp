#pragma once

#include <iostream>
#include <string.h>


class Cstring
{
public:
	Cstring();
	Cstring(const char c);
	Cstring(const char *str);
	~Cstring();

	Cstring plus(const char c);

	const char* getString();

	bool plusGrandQue(const Cstring &str);
	bool infOuEgale(const Cstring &str);
	Cstring plusGrand(const Cstring &str);

private:
	char *string;

	//static unsigned int occurence;
};