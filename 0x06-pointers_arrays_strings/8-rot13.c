#include "holberton.h"
/**
* *rot13 - return char
*
* @d: value
* Return: Always 0 (Success)
*/

char *rot13(char *d)
{
	char alpha[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
	 'j', 'k', 'l', 'm',
	'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
	'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};
	char beta[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
	 'x', 'y', 'z',
	'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
	'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	int cont, index;

	for (cont = 0; d[cont]; cont++)
	{
		for (index = 0; alpha[index]; index++)
		{
			if (d[cont] == alpha[index])
			{
				d[cont] = beta[index];
				break;
			}
		}
	}
	return (d);
}
