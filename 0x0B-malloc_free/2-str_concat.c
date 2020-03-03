#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: A concatenate string
 */

char *str_concat(char *s1, char *s2)
{
	int ite;
	int kte;
	char *ptr; /*string concatenate*/

	for (ite = 0; s1 && s1[ite]; ite++)
	{
	}

	for (kte = 0; s2 && s2[kte]; kte++)
	{
	}
	ptr = malloc((ite + kte + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (ite = 0; s1 && s1[ite]; ite++)
	{
		*(ptr + ite) = *(s1 + ite);
	}
	for (kte = 0; s2 && s2[kte]; kte++)
	{
		*(ptr + ite) = *(s2 + kte);
		ite++;
	}
	*(ptr + ite) = '\0';
	return (ptr);
}
