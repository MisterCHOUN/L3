#include <iostream>

#define N 10

void tableauEcriture(int *tabl, const unsigned int &n)
{
	for (unsigned int i = 0; i < n; ++i)
		tabl[i] = i;
}

void tableauLecture(const int *tabl, const unsigned int &n)
{
	for (unsigned int i = 0; i < n; ++i)
		printf("%d ", tabl[i]);
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int array[N];

	tableauEcriture(array, N);
	tableauLecture(array, N);

	return 0;
}