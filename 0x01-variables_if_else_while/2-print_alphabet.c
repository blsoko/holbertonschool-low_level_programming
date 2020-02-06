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
	int countnum = 0;

	while (countnum != 26)
	{
		putchar(a++);
		countnum++;
		if (countnum == 26)
		{
			putchar('\n');
		}
	}
	return (0);
}
