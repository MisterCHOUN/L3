#include <iostream>

#include "CList.hpp"
#include "CPile.hpp"

int main(int argc, char const *argv[])
{
	std::cout << "Hello World !" << std::endl;

	CList<int> list1(123), list2;

	list1 += 12;
	list1 += 1;

	std::cout << list1 << std::endl;
	std::cout << list2 << std::endl;

	printf("\n\n");

	CPile<float> pile1(98);

	std::cout << pile1 << std::endl;


	return 0;
}