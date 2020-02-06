#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a';

	int countnum = 0;

	while (countnum <= 26)
	{
		if (countnum != 4 && countnum != 16)
		{
			putchar(a++);
			countnum++;
		}
		else
		{
			a += 1;
			countnum += 1;
		}
	}
	putchar('\n');
	return (0);
}
