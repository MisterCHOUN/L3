#pragma once

#include <iostream>
#include <memory>
#include <string.h>


class Cstring
{
public:
	Cstring();
	Cstring(const char c);
	Cstring(const char *str);
	Cstring(const Cstring& cstr);
	~Cstring();


	const Cstring& operator=(const Cstring& cstr);
	const Cstring& operator=(Cstring&& cstr);

	Cstring operator+(const char& c);

	const bool operator<(const Cstring& cstr);
	const bool operator<=(const Cstring& cstr);
	const bool operator>(const Cstring& cstr);
	const bool operator>=(const Cstring& cstr);
	friend std::ostream& operator<<(std::ostream& flux, const Cstring& cstr);


	char* getString();
	const Cstring& plusGrand(const Cstring& cstr);


	static int nbrChaines();

private:
	void resize(unsigned int new_size);

private:
	static int countInstance;
	std::unique_ptr<char[]> string;
	unsigned int size;
};
