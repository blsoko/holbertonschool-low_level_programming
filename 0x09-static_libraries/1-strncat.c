#include "holberton.h"
/**
* *_strncat - return char
*
* @dest: value
* @src: value
* @n: value
*
* Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
	int cont, len;

	for (len = 0; dest[len]; len++)
	{
	}

	for (cont = 0; cont < n; cont++)
	{
		dest[len + cont] = src[cont];
	}
	dest[len + cont] = '\0';
	return (dest);
}
