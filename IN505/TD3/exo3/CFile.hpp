#ifndef CFILE_H
#define CFILE_H


#include <iostream>

#include "CList.hpp"


template<typename T> class CFile;


template<typename T>
class CFile : public CList<T>
{
public:
	CFile() : CList<T>() {}

	CFile(const T& t) : CList<T>(t) {}

	~CFile() {}

	/*----------------------------------------------------------------------------*/

	const CFile& operator+=(const T& t)
	{	
		node<T>* buffer = new node<T>(t);

		if(this->m_listSize == 0)
			this->m_list = this->m_listEnd = buffer;
		else
		{
			this->m_listEnd->next = buffer;
			this->m_listEnd = this->m_listEnd;
		}

		this->m_listSize++;
		return *this;
	}

	CFile& operator<(const T& t)
	{
		*this += t;
		return *this;
	}

	const CFile& operator>(T& t)
	{
		if(!this->m_listSize)
			throw std::out_of_range("Empty queue");
		this->m_listSize--;
		node<T>* buffer = this->m_list;
		this->m_list = this->m_list->next;

		t = buffer->m_val;
		delete buffer;
		return *this;
	}	
};

#endif