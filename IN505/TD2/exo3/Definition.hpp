#pragma once

#include <iostream>

#include "Cstring.hpp"

class Definition
{
public:
	Definition();
	Definition(const char* word, const char* definition);
	~Definition();

	friend std::ostream& operator<<(std::ostream& flux, const Definition& definition);

	const Cstring& getClef() const;
	const Cstring& getDef() const;

private:
	Cstring mot, def;
	
};