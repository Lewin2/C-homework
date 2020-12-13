#include <stdio.h>

void getmax(void);
void getmin(void);
float a, b, c, max, min;

int main(viod)
{
	a = 3.5, b = -4.5, c = 2.3e-1, max = min = 0;
	getmax();
	getmin();
	printf("Max number is %f.\n", max);
	printf("Min number is %f.\n", min);

	return 0;
}

void getmax(void)
{
	if (a >= b)
	{
		if (a >= c)
		{
			max = a;
		}

		else
		{
			max = c;
		}
	}
	else
	{
		if (b >= c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	return max;
}

void getmin(void)
{
	if (a <= b)
	{
		if (a <= c)
		{
			min = a;
		}

		else
		{
			min = c;
		}
	}
	else
	{
		if (b <= c)
		{
			min = b;
		}
		else
		{
			min = c;
		}
	}
	return min;
}