#include "holberton.h"

/**
 * _atoi - print number
 * @s: pointer
 *
 * Return: int number
 */

int _atoi(char *s)
{
	int cncel, ans;
	int i = 0;
	int signo = 1;

	ans = 0;
	while (i >= 0)
	{
		cncel = 0;
		if (s[i] == '-')
		{
			signo *= -1;
		}
		else if (s[i] < 10 && s[i] >= 0)
		{
			cncel = 1;
			ans = ans * 10 + s[i];
		}
		i++;
		else if (cncel == 1)
		{
			if (s[i + 1] < 10 && s[i + 1] >= 0)
			{
				i = -1;
			}
		}
	}
	ans *= -1;
	return (ans);
}
