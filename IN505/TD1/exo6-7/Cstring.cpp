#include "Cstring.hpp"


int Cstring::countInstance = 0;

/*-------------------------------------------------------------------------------------------*/

Cstring::Cstring() : size(0)
{
	countInstance++;
}

Cstring::Cstring(const char c)
{
	size = 2;
	string = std::make_unique<char[]>(size);
	string[0] = c;
	string[1] = '\0';

	countInstance++;
}

Cstring::Cstring(const char *str)
{
	size = strlen(str) + 1;
	string = std::make_unique<char[]>(size);
	strcpy(string.get(), str);
	string[size - 1] = '\0';

	countInstance++;
}

Cstring::Cstring(const Cstring& cstr) : Cstring(cstr.string.get())
{

}

Cstring::~Cstring()
{

}

/*-------------------------------------------------------------------------------------------*/

void Cstring::resize(unsigned int new_size)
{
	std::unique_ptr<char[]> res = std::make_unique<char[]>(new_size);
	size = new_size;
	strcpy(res.get(), string.get());
	res.get()[size - 1] = '\0';
	string = std::move(res);
}

/*-------------------------------------------------------------------------------------------*/

const Cstring& Cstring::operator=(const Cstring& cstr)
{
	resize(cstr.size);
	strcpy(string.get(), cstr.string.get());
	return *this;
}

const Cstring& Cstring::operator=(Cstring&& cstr)
{
	size = cstr.size;
	string = std::move(cstr.string);
	return *this;
}

Cstring Cstring::operator+(const char& c)
{
	Cstring res = *this;
	res.size++;
	res.resize(res.size);
	res.string[res.size - 2] = c;
	res.string[res.size - 1] = '\0';
	return res;
}

const bool Cstring::operator<(const Cstring& cstr)
{
	for (unsigned int i = 0; i < std::min(size, cstr.size); ++i)
	{
		if(string[i] != cstr.string[i])
			return string[i] < cstr.string[i];
	}
	if(size >= cstr.size)
		return false;
	return true;
}

const bool Cstring::operator<=(const Cstring& cstr)
{
	for (unsigned int i = 0; i < std::min(size, cstr.size); ++i)
	{
		if(string[i] != cstr.string[i])
			return string[i] < cstr.string[i];
	}
	if(size > cstr.size)
		return false;
	return true;
}

const bool Cstring::operator>(const Cstring& cstr)
{
	return !(*this <= cstr);
}

const bool Cstring::operator>=(const Cstring& cstr)
{
	return !(*this < cstr);
}

std::ostream& operator<<(std::ostream& flux, const Cstring& cstr)
{
	flux << cstr.string.get();
	return flux;
}

/*-------------------------------------------------------------------------------------------*/

char* Cstring::getString()
{
	return string.get();
}

const Cstring& Cstring::plusGrand(const Cstring& cstr)
{
	return (*this > cstr) ? *this : cstr;
}

/*-------------------------------------------------------------------------------------------*/

int Cstring::nbrChaines()
{
	return countInstance;
}