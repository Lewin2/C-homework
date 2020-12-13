#include <stdio.h>

void printm(int, int);

int main(void)
{
	int row = 5, column = 5;

	printm(row, column);

	return 0;
}

void printm(int r, int c)
{
	int t, i, row = 1, column = 1;

	for (t = 1; t <= r * c; t++)
	{
		i = row + column;

		if (i % 2 == 0)
		{
			printf("X");
		}
		else
		{
			printf("O");
		}
		if (column % c == 0)
		{
			printf("\n");
		}

		if (column == c)
		{
			row++;
			column = 0;
		}
		column++;
		
	}

	return 0;
}