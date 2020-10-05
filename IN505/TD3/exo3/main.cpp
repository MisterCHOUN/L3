#include <iostream>

#include "CPile.hpp"
#include "CFile.hpp"

int main(int argc, char const *argv[])
{
	CPile<int> pile;
	CFile<int> file;

	printf("FILE :\n");
	CList<int>* ptList = &file;
	*ptList < 0 < 1;
	std::cout << *ptList << "\n";
	int i = 0;
	file > i;
	std::cout << *ptList << " i = " << i << "\n";


	printf("\nPILE\n");
	ptList = &pile;
	*ptList < 0 < 1;
	std::cout << *ptList << "\n";
	pile > i;
	std::cout << *ptList << " i = " << i << "\n";


	return 0;
}