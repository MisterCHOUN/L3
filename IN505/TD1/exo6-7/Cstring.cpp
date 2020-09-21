#include "Cstring.hpp"


Cstring::Cstring()
{
	this->string = new char[1];
	this->string[1] = '\0';
}

Cstring::Cstring(const char c)
{
	this->string = new char[2];
	this->string[0] = c;
	this->string[1] = '\0';
}

Cstring::Cstring(const char *str)
{
	this->string = new char[strlen(str) + 1];
	strcpy(this->string, str);
	this->string[strlen(str)] = '\0';
}

Cstring::~Cstring()
{
	//delete[] this->string;
}


/*-------------------------------------------------------*/


Cstring Cstring::plus(const char c)
{
	Cstring buffer(strcat(this->string, &c));
	return buffer;
}


const char* Cstring::getString()
{
	return this->string;
}


bool Cstring::plusGrandQue(const Cstring &str)
{
	return true;
}

bool Cstring::infOuEgale(const Cstring &str)
{
	return true;
}

Cstring Cstring::plusGrand(const Cstring &str)
{
	return *this;
}
