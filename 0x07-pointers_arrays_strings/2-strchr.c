#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - to another
 *
 * @s: array pointer
 * @c: what type of value
 *
 * Return:  a multidemnsional array
 */

char *_strchr(char *s, char c)
{
	int count = 0;

	for (count = 0; s[count]; count++)
	{
		if (s[count] == c)
		{
			return (s + count);
		}
	}
	if (c == '\0')
	{
		return (s + count);
	}
	return (NULL);
}
