#include <stdio.h>

int main(void)
{
	int t, n = 33;

	for (t = 1; t < n; t++)
	{
		printf("$");
		if (t % 8 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}