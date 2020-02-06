#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'z';
	int countnum = 26;

	while (countnum != 0)
	{
		putchar(a--);
		countnum--;
		if (countnum == 0)
		{
			putchar('\n');
		}
	}
	return (0);
}
