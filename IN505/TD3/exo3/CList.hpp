#pragma once

#include <iostream>
#include <memory>




template<typename U>
struct node
{
	U m_val;
	node* next;

	node() {}
	node(const U& val) {m_val  = val; next = nullptr;}
};




template<typename T> class CList;

template<typename T>
class CList
{
public:
	CList() : m_list(nullptr), m_listEnd(nullptr), m_listSize(0)
	{

	}

	CList(const T& t) : m_listSize(1)
	{
		m_list = new node<T>(t);
		m_listEnd = m_list;
	}

	CList(const CList& list)
	{
		*this = list;
	}
	
	~CList()
	{
		while(m_list)
		{
			node<T>* buffer = m_list;
			m_list = m_list->next;
			delete buffer;
		}
	}

	/*----------------------------------------------------------------------------*/


	const CList& operator+=(const T& t)
	{
		m_listSize++;
		m_listEnd->next = new node<T>(t);
		m_listEnd = m_listEnd->next;
		return *this;
	}

	const CList& operator=(const CList& list)
	{
		m_listSize = list.m_listSize;

		if(m_listSize)
		{
			m_list = new node<T>(list.m_list->m_val);
			m_listEnd = m_list;
			
			for(node<T>* i = list.m_list->next; i != nullptr; i = i->next)
			{
				m_listEnd->next = new node<T>(i->m_val);
				m_listEnd = m_listEnd->next;
			}
		}
		else
			m_list = m_listEnd = nullptr;

		return *this;
	}

	const CList& operator=(const CList&& list)
	{
		//pas encore implementer
		return *this;
	}


	friend std::ostream& operator<<(std::ostream& flux, const CList<T>& list)
	{
		flux << ">" << list.m_listSize << ">[";
		if(list.m_listSize)
		{
			for(node<T>* i = list.m_list; i != nullptr; i = i->next)
			{
				flux << i->m_val;
				if(i->next)
					flux << ", ";
			}
		}
		flux << "]";
		return flux;
	}


protected:
	node<T>* m_list;
	node<T>* m_listEnd;
	unsigned int m_listSize;
};

