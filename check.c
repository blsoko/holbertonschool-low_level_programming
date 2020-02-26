#include <stdio.h>

int factorial(int n)
{
	return (n * factorial(n - 1));
	if (n == 0)
	{
		return (1);
	}
}

int main(void)
{
	int f;
	
	f = factorial(5);
	printf ("5! %d\n", f);
	return (0);
}
