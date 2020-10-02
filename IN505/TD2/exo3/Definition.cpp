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

std::ostream& operator<<(std::ostream& flux, const Definition& definition)
{
	flux << "(" << definition.mot << " : " << definition.def << ")";
	return flux;
}

/*--------------------------------------------------------------------------*/

const Cstring& Definition::getClef() const
{
	return mot;
}

const Cstring& Definition::getDef() const
{
	return def;
}