#include "holberton.h"
/**
* *_strcat - return char
*
* @dest: value
* @src: value
*
* Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
	int cont, len;

	for (len = 0; dest[len]; len++)
	{
	}

	for (cont = 0; src[cont]; cont++)
	{
		dest[len + cont] = src[cont];
	}
	dest[len + cont] = '\0';
	return (dest);
}
