#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(n);


int main(void)
{
	unsigned int n;
	printf("Enter the N to find fibonacci number¡G");
	scanf_s("%u", &n);
	printf("The %uth fibonacci number is¡G%u\n", n, fibonacci(n));
	system("pause");
	return 0;
}

unsigned long long int fibonacci(int m)
{

	int b = 0, n;
	int a = 1;

	if (m == 1)
	{
		return 0;
	}
	else if (m == 2)
	{
		return 1;
	}
	else if (m > 1)
	{
		for (int i = 1; i < m-1; i++)
		{
			n = a + b;
			b = a;
			a = n;
			
		}
		return n;

	}


}
