#include <iostream>

#include "Cstring.hpp"
#include <string.h>


int main(int argc, char const *argv[])
{
	Cstring s1("toto"), s2('q'), s3;

	//std::cout << "nbrChaines" << CString::nbrChaines() << std::endl;

		std::cout << "s1=" << s1.getString() << std::endl;

	s3 = s1.plus('w');
	std::cout << "s3=" << s3.getString() << std::endl;

	if(s1.plusGrandQue(s2)) //si s1 > s2 au sens alphabétiq
		std::cout << "plus grand" << std::endl;
	
	if(s1.infOuEgale(s2)) //si s1 <= s2 au sens alphabétiq
		std::cout << "plus petit" << std::endl ;

	s3 = s1.plusGrand(s2); //retourner s1 si s1>s2, s2 sino

	return 0;
}