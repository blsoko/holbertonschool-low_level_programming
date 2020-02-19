#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: pointer
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int index, count, iterador;
	char new[100000];

	for (index = 0; s[index] != '\0' ; index++)
	{
	}
	iterador = index;
	for (count = 0; count < index; count++)
	{
		iterador--;
		new[iterador] = s[count];
	}

	for (count = 0; count <= index; count++)
	{
		s[count] = new[count];
	}
}
