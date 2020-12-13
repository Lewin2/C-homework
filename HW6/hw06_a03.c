#include <stdio.h>

int factorial(int);
void getpermu(int, int, int*);
void getcombi(int, int, int*);

int main(void)
{
	int n = 4, r = 2, nPr = 0, nCr = 0; 
	
	getpermu(n, r, &nPr);
	getcombi(n, r, &nCr);
	//getcombi(n, r, &nCr, &nPr); nPr 가져오는 경우
	
	printf("nPr is %d, and nCr is %d.", nPr, nCr);
	
	return 0;
}

int factorial(int n)
{
	int i, resurt = 1;
	for (i = 1; i <= n; i++)
	{
		resurt *= i;
	}
	return resurt;
}

void getpermu(int n, int r, int* pp)
{
	*pp = factorial(n) / factorial(n - r);
}

//void getcombi(int n, int r, int* pc, int* pp)
void getcombi(int n, int r, int* pc)
{
	*pc = (factorial(n) / factorial(n - r)) / factorial(r);
	//*pc = *pp / factorial(r); nPr 가져오는 경우

}