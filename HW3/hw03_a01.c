#include <stdio.h>

int power(int, int);

int main(viod)
{
	int base = 5, exp = 3;

	printf("The %dth power of %d is %d.\n", exp, base, power(base, exp));

	return 0;
}

int power(int base, int exp)
{
	int i=1, resurt = 1;

	while (i <= exp)
	{
		resurt *= base;
		i++;
	}

	return resurt;
}