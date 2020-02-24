#include "holberton.h"
#include <stdio.h>
/**
 * *_strpbrk - to another
 *
 * @s: array pointer
 * @accept: what type of value
 *
 * Return:  a multidemnsional array
 */

char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int index = 0;

	for (count = 0; s[count]; count++)
	{
		for (index = 0; accept[index]; index++)
		{
			if (s[count] == accept[index])
			{
				return (s + count);
			}
		}
	}
	if (accept[index] == '\0')
	{
		return (s + count);
	}
	return (NULL);
}
