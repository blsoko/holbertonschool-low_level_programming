#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a';
	int A = 'A';
	int countnum = 0;
	int countnum1 = 0;

	while (countnum != 26)
	{
		putchar(a++);
		countnum++;

	}
	while (countnum1 != 26)
	{
		putchar(A++);
		countnum1++;
		if (countnum1 == 26)
		{
			putchar('\n');
			countnum1 = 0;
			break;
		}
	}


	return (0);
}
