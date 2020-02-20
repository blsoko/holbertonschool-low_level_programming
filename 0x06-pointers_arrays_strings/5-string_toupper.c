#include "holberton.h"
/**
* *string_toupper - return char
*
* @d: value
*
*
* Return: Always 0 (Success)
*/
char *string_toupper(char *d)
{
	int cont;

	for (cont = 0; d[cont] ; cont++)
	{
		if (d[cont] >= 97 && d[cont] <= 122)
		{
			d[cont] = d[cont] - 32;
		}
	}
	return (d);
}
