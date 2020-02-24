#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - to another
 *
 * @haystack: array pointer
 * @needle: what type of value
 *
 * Return: a multidemnsional array
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
	if (haystack[i] == needle[0])
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	}

	if (needle[j] == '\0')
	{
		return (haystack);
	}
	return (NULL);
}
