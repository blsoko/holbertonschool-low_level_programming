#include "holberton.h"
/**
* reverse_array - return char
*
* @a: value
* @n: value
*
*
* Return: Always 0 (Success)
*/

void reverse_array(int *a, int n)
{
	int cont, iterador;
	int narray[100000];

	iterador = n;
	for (cont = 0; cont < n; cont++)
	{
		iterador--;
		narray[iterador] = a[cont];
	}
	for (cont = 0; cont < n; cont++)
	{
		a[cont] = narray[cont];
	}
}
