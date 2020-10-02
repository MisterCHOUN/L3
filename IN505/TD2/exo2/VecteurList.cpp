#include "VecteurList.hpp"



VecteurList::VecteurList() : m_sizeList(0)
{

}

VecteurList::VecteurList(const int val) : m_sizeList(1)
{
	m_list = std::make_shared<node>(node(val, nullptr));
	m_listEnd = m_list;
}

VecteurList::~VecteurList()
{

}

/*-------------------------------------------------------------------------------------------*/

VecteurList::node::node()
{

}

VecteurList::node::node(const int val, const std::shared_ptr<node> suivant)
{
	value = val;
	next = suivant;
}

VecteurList::node::~node()
{

}


/*-------------------------------------------------------------------------------------------*/

const VecteurList& VecteurList::operator=(const VecteurList& vecteur)
{
	m_sizeList = vecteur.m_sizeList;
	
	m_list = m_listEnd = nullptr;

	m_list = std::make_shared<node>(node(vecteur.m_list->value, nullptr));
	m_listEnd = m_list;

	for(std::shared_ptr<VecteurList::node> i = vecteur.m_list->next; i != nullptr; i = i->next)
	{
		std::shared_ptr<node> buffer = std::make_shared<node>(node(i->value, nullptr));
		m_listEnd->next = buffer;
		m_listEnd = m_listEnd->next;
	}
	return *this;
}

const VecteurList& VecteurList::operator=(VecteurList&& vecteur)
{
	m_sizeList = vecteur.m_sizeList;
	m_list = std::move(vecteur.m_list);
	return *this;
}

const VecteurList& VecteurList::operator+=(const int val)
{
	std::shared_ptr<node> buffer = std::make_shared<node>(node(val, nullptr));
	m_listEnd->next = buffer;
	m_listEnd = buffer;
	m_sizeList++;
	return *this;
}

const int VecteurList::operator[](const unsigned int index)
{
	if(index >= m_sizeList)
		throw std::out_of_range("Index out of range");

	std::shared_ptr<node> buffer = m_list;

	for(unsigned int i = 0; i < index; i++)
	{
		buffer = buffer->next;
	}

	return buffer->value;
}

std::ostream& operator<<(std::ostream& flux, const VecteurList& vecteur)
{
	flux << "[";

	for(std::shared_ptr<VecteurList::node> i = vecteur.m_list; i != nullptr; i = i->next)
	{
		flux << i->value;
		if(i->next)
			flux << ", ";
	}

	flux << "]";
	return flux;
}

std::istream& operator>>(std::istream& flux, VecteurList& vecteur)
{
	int buffer;
	flux >> buffer;
	vecteur += buffer;
	return flux;
}

/*-------------------------------------------------------------------------------------------*/

