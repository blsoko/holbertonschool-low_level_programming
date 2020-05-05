#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - print number
 * @s: pointer
 *
 * Return: int number
 */
int _atoi(char *s)
{
	int isign = 0; /*iterador*/
	int a_sign = 1, a_num = 0; /*acumulador*/

	while ((s[isign] < '0' || s[isign] > '9') && s[isign] != '\0')
	/*if is not a number*/
	{
		if (s[isign] == '-')
		{
			a_sign *= -1;
		}
		isign++;
	}
	while ((s[isign] >= '0' && s[isign] <= '9') && s[isign] != '\0')
	{
		a_num = a_num * 10 + (s[isign] - '0');
		isign++;
	}
	a_num *= a_sign;
	return (a_num);
}
