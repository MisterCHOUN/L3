#include <iostream>

#include "Dictionnaire.hpp"
#include "Definition.hpp"


int main(int argc, char const *argv[])
{
	Dictionnaire dico;

	dico += Definition("zizi", "obsession de mathys");
	dico += Definition("raphael", "obsession de la musique");
	std::cout << dico << std::endl;

	//dico.printDef("zizi");

	//Definition def = dico.findDef("raphael");
	//std::cout << def << std::endl;

	return 0;
}