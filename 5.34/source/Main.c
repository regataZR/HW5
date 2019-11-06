#include <stdio.h>
#include <stdlib.h>

int a,b;

int c(int base, int exponent);

int main(void)
{
	printf("base¡G");
	scanf_s("%d", &a);
	printf("exponent¡G");
	scanf_s("%d", &b);
	printf("Ans¡G%d", c(a, b));
	system("pause");
	return 0;
}
int c(int base, int exponent)
{
	int A = base;
	int p;
	for (int i = 1; i < exponent; i++)
	{
		p = A * base;

		A = p;
	}
	return p;
}
