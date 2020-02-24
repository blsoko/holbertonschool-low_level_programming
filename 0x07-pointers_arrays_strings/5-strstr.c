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
	int count;

	for (count = 0; haystack[count]; count++)
	{
		if (haystack[count] == needle[0])
		{
			return (haystack + count);
		}
	}
	if (haystack[count] == '\0')
	{
		return (haystack);
	}
	return (NULL);
}
