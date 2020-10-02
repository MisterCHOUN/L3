#include "Dictionnaire.hpp"


Dictionnaire::Dictionnaire() : m_listSize(0)
{

}

Dictionnaire::~Dictionnaire()
{

}

/*-------------------------------------------------------------------------------------------*/

Dictionnaire::node::node()
{

}

Dictionnaire::node::node(const char* word, const char* def, const std::shared_ptr<node> suiv)
	: definition(word, def), next(suiv)
{

}

Dictionnaire::node::~node()
{

}

/*-------------------------------------------------------------------------------------------*/

const std::shared_ptr<Dictionnaire::node> Dictionnaire::findNode(const char* word) const
{
	Cstring str = Cstring(word);

	for(std::shared_ptr<node> i = m_list; i != nullptr; i = i->next)
	{
		if(str == i->definition.getClef())
			return i;
	}

	printf("retourn null\n");
	return nullptr;
}

/*-------------------------------------------------------------------------------------------*/

const Dictionnaire& Dictionnaire::operator+=(const Definition& def)
{
	std::shared_ptr<node> buffer;
	buffer = std::make_shared<node>(def.getClef().getString(), def.getDef().getString(), nullptr);
	
	if(m_list == nullptr)
	{
		m_list = buffer;
		m_listEnd = buffer;
	}
	if(def.getClef() < m_list->definition.getClef())
	{
		printf("on est la dedans\n");
		m_list->next = buffer;
		m_listEnd = buffer;
	}
	/*else
	{
		for(std::shared_ptr<node> i = m_list->next; i->next != nullptr; i = i->next)
		{
			//if(i->definition.getClef() < def.getClef())
			printf("ca marche\n");
		}
	}*/
	

	m_listSize++;
	return *this;
}

std::ostream& operator<<(std::ostream& flux, const Dictionnaire& dico)
{
	flux << ">" << dico.m_listSize << "[";
	for(std::shared_ptr<Dictionnaire::node> i = dico.m_list; i != nullptr; i = i->next)
	{
		flux << i->definition;
		if(i->next)
			flux << ", ";
	}
	flux << "]";
	return flux;
}

/*-------------------------------------------------------------------------------------------*/

void Dictionnaire::printDef(const char* word) const
{
	if(!findNode(word))
		throw std::invalid_argument("Word not in dico !");
	std::cout << findNode(word)->definition << std::endl;
}

const Definition& Dictionnaire::findDef(const char* word) const
{
	if(!findNode(word))
		throw std::invalid_argument("Word not in dico !");
	return findNode(word)->definition;
}