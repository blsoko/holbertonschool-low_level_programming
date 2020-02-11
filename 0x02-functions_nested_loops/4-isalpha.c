#include "holberton.h"

/**
* _isalpha - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _isalpha(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	if (c > 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
