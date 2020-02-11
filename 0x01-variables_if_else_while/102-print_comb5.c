#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x, z;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
		for (x = 48; x < 58; x++)
		{
		for (z = 48; z < 58; z++)
		{
	 	
		
		
		putchar(i);
		putchar(j);
		putchar(' ');
		putchar(x);
		putchar(z);
		if (i != 57 && j != 56 && x != 57 && z != 57)
		{
		putchar(',');
		putchar(' ');
		
		}
		}
		}
		}
	}

	putchar('\n');
	return (0);
}

