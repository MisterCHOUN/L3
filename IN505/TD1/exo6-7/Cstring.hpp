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

	Cstring operator= (const Cstring &str)
	{
		delete[] this->string;
		this->string = nullptr;

		this->string = new char[strlen(str.string)];
		strcpy(this->string, str.string);

		return *this;
	}

	void print();

private:
	char *string;

	//static unsigned int occurence;
};