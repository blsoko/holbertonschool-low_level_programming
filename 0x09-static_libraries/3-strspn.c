#include "holberton.h"

/**
 * _strspn - to another
 *
 * @s: array pointer
 * @accept: what type of value
 *
 * Return: a multidemnsional array
 */

unsigned int _strspn(char *s, char *accept)
{
	int count, index;
	int bits = 0;

	for (count = 0; s[count]; count++)
	{
		for (index = 0; s[index]; index++)
		{
			if (s[count] == accept[index])
			{
				bits++;
				break;
			}
		}
		if (s[count] != accept[index])
		{
			break;
		}
	}
	return (bits);
}
