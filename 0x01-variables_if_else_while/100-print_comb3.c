#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, vartmp1, vartmp2;

	for (i = 0; i <= 89 ; i++)
	{
		vartmp1 = ((i / 10) + '0');
		vartmp2 = ((i % 10) + '0');

		if (vartmp1 < vartmp2)
		{
		putchar(vartmp1);
		putchar(vartmp2);
		if (i < 88)
		{
			putchar(44);
			putchar(' ');
		}
		}
	}

	putchar('\n');
	return (0);
}

