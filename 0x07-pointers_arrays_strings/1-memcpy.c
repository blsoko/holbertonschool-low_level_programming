#include "holberton.h"

/**
 * *_memcpy - to another
 *
 * @dest: array pointer
 * @src: what type of value
 * @n: until a number
 *
 * Return: a multidemnsional array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;

	}
	return (dest);
}
