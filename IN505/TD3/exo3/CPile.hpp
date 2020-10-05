#pragma once

#include <iostream>

#include "CList.hpp"


template<typename T> class CPile;


template<typename T>
class CPile : public CList<T>
{
public:
	CPile() : CList<T>()
	{

	}

	CPile(const T& t) : CList<T>(t)
	{

	}

	~CPile()
	{

	}

	CPile& operator<(const T& t)
	{

		return *this;
	}

private:
	
};