#include <stdio.h>

void printo(void);
void printx(void);
void printn(void);

int main(void)
{
	int row, column, x, y, i, j;
	while (1)
	{
		printf("Input row, column, x, y:");
		scanf("%d %d %d %d", &row, &column, &x, &y);

		int i = 1, j = 1;

		while (1)
		{
			if (i == y)
			{
				printx();
			}

			else if (j == x)
			{
				printx();
			}

			else
			{
				printo();
			}

			if (i * j == row * column)
			{
				printn();
				break;
			}
			
			if (i == column)
			{
				printn();
				j++;
				i = 0;
			}
			i++;
		}
	}
	return 0;
}

void printo(void)
{
	printf("O");
}

void printx(void)
{
	printf("X");
}

void printn(void)
{
	printf("\n");
}