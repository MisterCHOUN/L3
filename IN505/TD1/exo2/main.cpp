#include <iostream>


template<typename T>
void echange(T &x, T &y)
{
	T buffer = x;
	x = y;
	y = buffer;
}

void echangeWithoutT(int *x, int *y)
{
	int buffer = *x;
	*x = *y;
	*y = buffer;
}

int main(int argc, char const *argv[])
{
	int val1(1), val2(2);

	printf("val : %d %d\n", val1, val2);

	echange<int>(val1, val2);

	printf("val : %d %d\n", val1, val2);


	// sans template

	printf("sans template\n");
	
	printf("val : %d %d\n", val1, val2);

	echangeWithoutT(&val1, &val2);
	
	printf("val : %d %d\n", val1, val2);

	return 0;
}

