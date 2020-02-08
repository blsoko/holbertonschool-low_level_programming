#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
		for (x = 48; x < 58; x++)
		{

		if (j < x && i < j)
		{
		putchar(i);
		putchar(j);
		putchar(x);

		if (i != 55 && j != 58)
		{
			putchar(44);
			putchar(' ');
		}
		}
		}
		}
	}

	putchar('\n');
	return (0);
}

