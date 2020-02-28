#include "holberton.h"
/**
* _strcmp - return char
*
* @s1: value
* @s2: value
*
*
* Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (i >= 0)
	{
		if (s1[i] - s2[i] == 0 && s1[i] != '\0' && s2[i] != '\0')
		{
			i++;
		}
		else
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
