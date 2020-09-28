#include "Cstring.hpp"


int Cstring::countInstance = 0;


Cstring::Cstring()
{
	this->string = new char[1];
	this->string[1] = '\0';

	countInstance++;
}

Cstring::Cstring(const char c)
{
	this->string = new char[2];
	this->string[0] = c;
	this->string[1] = '\0';

	countInstance++;
}

Cstring::Cstring(const char *str)
{
	this->string = new char[strlen(str) + 1];
	strcpy(this->string, str);
	this->string[strlen(str)] = '\0';

	countInstance++;
}

Cstring::~Cstring()
{
	delete[] this->string;
	this->string = nullptr;

	countInstance--;
}


/*-------------------------------------------------------*/


void Cstring::plus(const char c)
{
	char* buffer = new char[strlen(this->string) + 2];

	strcpy(buffer, this->string);
	buffer[strlen(this->string)] = c;
	buffer[strlen(this->string) + 1] = '\0';
	delete[] this->string;
	this->string = buffer;
}


char* Cstring::getString()
{
	return this->string;
}


bool Cstring::plusGrandQue(Cstring &str)
{
	char *buffer = str.getString();
	int i(0), j(0);
	
	//printf("%s %s\n", string, buffer);

	while(this->string[i] != '\0' && buffer[j] != '\0')
	{
		if(this->string[i] > buffer[j])
			return true;
		else if(this->string[i] < buffer[j])
			return false;

		i++;
		j++;
	}
	if(this->string[i] == '\0' && buffer[j] == '\0')
		return false;
	else if(this->string[i] == '\0')
		return false;
	return true;
}

bool Cstring::infOuEgale(Cstring &str)
{
	char *buffer = str.getString();

	//printf("%s %s\n", string, buffer);
	
	if(this->string[0] == '\0')
		return true;
	else if(buffer[0] == '\0')
		return false;
	return this->string[0] <= buffer[0];
}

void Cstring::plusGrand(const Cstring &str)
{
	/*if(strlen(this->string) > strlen(str.string))
		return *this;
	else
		return str;
	//return *this;*/
}


int Cstring::nbrChaines()
{
	return countInstance;
}