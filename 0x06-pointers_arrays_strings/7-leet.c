#include "holberton.h"
/**
* *leet - return char
*
* @d: value
*
*
* Return: Always 0 (Success)
*/
char *leet(char *d)
{
	int cont, i;
	char a[6] = {'a','e','o','t','l'};
	char A[6] = {'A','E','O','T','L'};
	char n[6] = {'4','3','0','7','1'};
	for (cont = 0; d[cont]; cont++)
	{
		for (i = 0; a[i]; i++)
		{
			if (a[i] == d[cont] || A[i] == d[cont])
			{
				d[cont] = n[i];
			}
		}
	}
	return (d);
}
