#include "holberton.h"
/**
* _isupper - Entry point
* @c: value
*
* Return: Always 0 (Success)
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
