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

	void plus(const char c);

	char* getString();

	bool plusGrandQue(Cstring &str);
	bool infOuEgale(Cstring &str);
	void plusGrand(const Cstring &str);

	static int nbrChaines();

private:
	static int countInstance;
	char *string;
};
