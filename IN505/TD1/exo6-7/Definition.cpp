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

const Cstring& Definition::getClef()
{
	return mot;
}

const Cstring& Definition::getDef()
{
	return def;
}