#include "holberton.h"
/**
* *_strncpy - return char
*
* @dest: value
* @src: value
* @n: value
*
* Return: Always 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int cont, len;

	for (len = 0; dest[len]; len++)
	{
	}

	for (cont = 0; cont < n && src[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}

	for ( ; cont < n ; cont++)
	{
		dest[cont] = '\0';
	}
	dest[len + 1] = '\0';
	return (dest);
}
