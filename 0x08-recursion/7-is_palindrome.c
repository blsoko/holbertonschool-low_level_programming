#include "holberton.h"
/**
 * _strlen_recursion - function
 * @s: value
 *
 * Return: value of function;
 */

int _strlen_recursion(char *s)
{
	if (*s != 0)
	{

		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
 * compare - function
 * @p1: value
 * @p2: value
 *
 * Return: value;
 */

int compare(char *p1, char *p2)
{
	if (*(p1 + 1) == '\0')
	{
		return (1);
	}
	else if (*p1 == *p2)
	{
		return (compare(p1 + 1, p2 - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - function
 * @s: value
 *
 * Return: value of function;
 */

int is_palindrome(char *s)
{
	int length = 0;

	length = _strlen_recursion(s);
	length--;
	return (compare(s, s + length));
}
