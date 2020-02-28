#include "holberton.h"

/**
 * _atoi - print number
 * @s: pointer
 *
 * Return: int number
 */
int _atoi(char *s)
{
	int cncel, ans, j, work;
	int i = 0;
	int signo = 1;
	int hard = 10;

	ans = 0;
	while (i >= 0)
	{
		work = 0;
		cncel = 0;
		if (s[i] == '-')
		{
			signo *= -1;
		}
		else if (s[i] <= '9' && s[i] >= '0')
		{
			cncel = 1;
			ans = ans * 10 + s[i];
		}
		for (j = 0; j < hard; j++)
		{
			if (cncel == 1 && s[i + 1] != j)
			{
				work = 1;
				break;
			}
		}
		if (work == 1)
		{
			break;
		}
		i++;
	}
	ans *= signo;
	return (ans);
}
