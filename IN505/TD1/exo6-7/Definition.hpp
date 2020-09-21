#pragma once

#include <iostream>

#include "Cstring.hpp"

class Definition
{
public:
	Definition();
	Definition(const char* word, const char* definition);
	~Definition();

	const char* getClef();
	const char* getDef();

private:
	Cstring mot, def;
	
};