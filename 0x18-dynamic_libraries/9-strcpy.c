#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: pointer
 * @src: pointer
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		*(dest + count) = src[count];
	}
	*(dest + count) = '\0';
	return (dest);
}
