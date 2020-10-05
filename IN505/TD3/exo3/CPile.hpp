#ifndef CPILE_H
#define CPILE_H


#include <iostream>

#include "CList.hpp"


template<typename T> class CPile;


template<typename T>
class CPile : public CList<T>
{
public:
	CPile() : CList<T>() {}

	CPile(const T& t) : CList<T>(t) {}

	~CPile() {}

	/*----------------------------------------------------------------------------*/

	const CPile& operator+=(const T& t)
	{
		this->m_listSize++;
		node<T>* buffer = new node<T>(t);
		buffer->next = this->m_list;
		this->m_list = buffer;
		return *this;
	}

	CPile& operator<(const T& t)
	{
		*this += t;
		return *this;
	}

	const CPile& operator>(T& t)
	{
		if(!this->m_listSize)
			throw std::out_of_range("Empty Stack");
		this->m_listSize--;
		node<T>* buffer = this->m_list;
		this->m_list = this->m_list->next;

		t = buffer->m_val;
		delete buffer;
		return *this;
	}	
};

#endif