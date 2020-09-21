#include "Cstring.hpp"


Cstring::Cstring()
{
	this->string = nullptr;
}

Cstring::Cstring(const char c)
{
	this->string = new char[1];
	this->string[0] = c;
}

Cstring::Cstring(const char *str)
{
	this->string = new char[strlen(str)];
	strcpy(this->string, str);
}

Cstring::~Cstring()
{
	delete[] this->string;
}


/*-------------------------------------------------------*/


Cstring Cstring::plus(const char c)
{
	return *this;
}


const char* Cstring::getString()
{
	return this->string;
}


void Cstring::print()
{
	printf("%s\n", string);
}