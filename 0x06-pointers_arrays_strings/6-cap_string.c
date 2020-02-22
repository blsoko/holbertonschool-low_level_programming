#include "holberton.h"
/**
* *cap_string - return char
*
* @d: value
*
*
* Return: Always 0 (Success)
*/
char *cap_string(char *d)
{
	int cont, i;
	char signs[] = {' ', '\n', '\t', ',', ';', '.', '!',
	 '?', '"', '(', ')', '{', '}'};

	for (cont = 1; d[cont] ; cont++)
	{
		for (i = 0; signs[i]; i++)
		{
			if (d[cont] == signs[i] && d[cont + 1]
			 >= 97 && d[cont + 1] <= 122)
			{
				d[cont + 1] = d[cont + 1] - 32;
			}
		}
	}
	cont = 0;
	if (d[cont] >= 97 && d[cont] <= 122)
	{
		d[cont] = d[cont] - 32;
	}
	return (d);
}
