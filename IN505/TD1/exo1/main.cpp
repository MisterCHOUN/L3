#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
	//question a -----------------------------------

	int integers[10];
	for (int i = 0; i < 10; ++i)
	{
		integers[i] = rand() % 100;
		printf("%d ", integers[i]);
	}
	printf("\n");

	int *p = integers;

	for (int i = 0; i < 10; ++i)
	{
		printf(">%d\n", *p);
		p++;
	}

	printf("\n\n\n");
	//question b -----------------------------------

	std::string *words;
	words = new std::string[3];

	words[0] = "truc";
	words[1] = "machin";
	words[2] = "chose";

	for (int i = 0; i < 3; ++i)
		std::cout << "> " << words[i] << std::endl;

	delete[] words;

	return 0;
}