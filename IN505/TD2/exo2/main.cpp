#include <iostream>

#include "VecteurTableau.hpp"
#include "VecteurList.hpp"

int main(int argc, char const *argv[])
{
	//VecteurTableau
	VecteurTableau vecArray1(1), vecArray2;

	vecArray1 += 12;

	std::cout << "vecArray1 : " << vecArray1 << std::endl;
	std::cout << "vecArray2 : " << vecArray2 << "\n" << std::endl;

	vecArray2 = vecArray1;
	vecArray1 = VecteurTableau(2);

	std::cout << "vecArray1 : " << vecArray1 << std::endl;
	std::cout << "vecArray2 : " << vecArray2 << "\n" << std::endl;

	std::cout << "vecArray2[1] : " << vecArray2[1] << std::endl;

	std::cout << "What value do you want to add in vecArray2 ? :" << std::endl;
	std::cin >> vecArray2;

	std::cout << "vecArray2 : " << vecArray2 << std::endl;

	//VecteurList
	printf("\n\n");
	VecteurList vecList1(1), vecList2;

	vecList1 += 12;

	std::cout << "vecList1 : " << vecList1 << std::endl;
	std::cout << "vecList2 : " << vecList2 << "\n" << std::endl;

	vecList2 = vecList1;
	vecList1 = VecteurList(2);

	std::cout << "vecList1 : " << vecList1 << std::endl;
	std::cout << "vecList2 : " << vecList2 << "\n" << std::endl;

	std::cout << "vecList2[1] : " << vecList2[1] << std::endl;

	std::cout << "What value do you want to add in vecList2 ? :" << std::endl;
	std::cin >> vecList2;

	std::cout << "vecList2 : " << vecList2 << std::endl;

	return 0;
}