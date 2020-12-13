#include <stdio.h>

int main(void)
{
	int i, t, n = 6;

	for (i = 1; i < n; i++)
	{
		for (t = 1; t < i + 1; t++)
		{
			printf("$");
		}
		printf("\n");
	}

	return 0;
}