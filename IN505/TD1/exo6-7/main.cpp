#include <iostream>

#include <string.h>

#include "Cstring.hpp"
#include "Definition.hpp"


int main(int argc, char const *argv[])
{
	// ---exo6 --- 
	printf("\nexo6\n\n");
	Cstring s1("toto");
	Cstring s2('q');
	Cstring s3("test");

	std::cout << "nbrChaines : " << Cstring::nbrChaines() << std::endl;

	s3 = s1.plus('w');
	std::cout << "s3=" << s3.getString() << std::endl;

	if(s1.plusGrandQue(s2)) //si s1 > s2 au sens alphabétiq
		std::cout << "plus grand" << std::endl;
	
	if(s1.infOuEgale(s2)) //si s1 <= s2 au sens alphabétiq
		std::cout << "plus petit ou egal" << std::endl ;

	s3 = s1.plusGrand(s2);

	std::cout << "s1=" << s1.getString() << std::endl;
	std::cout << "s2=" << s2.getString() << std::endl;
	std::cout << "s3=" << s3.getString() << std::endl;

	// ---exo7 --- 
	printf("\n\nexo7\n\n");

	Definition homer("Homer", "Buveur de biere");
	std::cout << "la definition du mot " << homer.getClef() << " est " << homer.getDef() << std::endl;

	return 0;
}
