#include "Definition.hpp"


Definition::Definition()
{

}

Definition::Definition(const char* word, const char* definition)
	: mot(word), def(definition)
{

}

Definition::~Definition()
{

}


/*--------------------------------------------------------------------------*/

const char* Definition::getClef()
{
	return this->mot.getString();
}

const char* Definition::getDef()
{
	return this->def.getString();
}