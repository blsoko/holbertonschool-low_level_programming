#include "holberton.h"

/**
 * *_memset - to another
 *
 * @*s: array pointer
 * @b: what type of value
 * @n: until a number
 *
 * Return - a multidemnsional array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;

	}
	return (s);
}
