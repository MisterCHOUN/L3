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
	Cstring s3;

	std::cout << "nbrChaines : " << Cstring::nbrChaines() << std::endl;
	
	s3 = s1 + 'w';
	std::cout << "s3=" << s3.getString() << std::endl;

	if(s1 > s2)
		std::cout << "Plus grand" << std::endl;
	if(s1 <= s2)
		std::cout << "Plus petit" << std::endl;

	s3 = s1.plusGrand(s2);


	// ---exo7 --- 
	printf("\n\nexo7\n\n");

	Definition homer("Homer", "Buveur de biere");
	std::cout << "la definition du mot " << homer.getClef() << " est " << homer.getDef() << std::endl;

	return 0;
}



// dans resize ne pas faire de strcpy