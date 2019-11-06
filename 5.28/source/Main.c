#include <stdio.h>
#include <stdlib.h>

char Change(char b);


int main(void)
{
	char a;

	printf("Please input an alphabet¡G\n");
	scanf_s(" %c", &a);
	printf(" %c\n", Change(a));

	system("pause");

	return 0;
}

char Change(char b)
{
	char na;

	if ((int)(b) < 91)
	{
		na = (int)b+32;
	}
	if ((int)(b) > 96)
	{
		na = (int)(b)-32;
	}

	return na;
}