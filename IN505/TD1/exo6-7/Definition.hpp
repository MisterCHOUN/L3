#pragma once

#include <iostream>

#include "Cstring.hpp"

class Definition
{
public:
	Definition();
	Definition(const char* word, const char* definition);
	~Definition();

	const Cstring& getClef();
	const Cstring& getDef();

private:
	Cstring mot, def;
	
};