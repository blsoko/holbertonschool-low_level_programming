#include "holberton.h"
#include <math.h>

/**
* print_number - Entry point
* @n: value 
*
* Return: Always 0 (Success)
*/
void print_number(int n)
{
	int digit, o_count, result, i_count, m_count;
	if (n == 0)
	{
		digit=1;
	} 
	else if (n > 0)
		for (m_count = 1; m_count <= 100000; m_count * 10)
		{
			if(n >= (m_count) && n < (m_count * 10))
			{
				digit = m_count + 1;
			}

		}
	else
	{
		_putchar('-');
		n = n * -1;
		for (m_count = 1; m_count <= 100000; m_count * 10)
		{
			if(n >= (m_count) && n < (10 ** (m_count * 10)))
			{
				digit = m_count+1;
			}
		}
	}
	for (i_count = digit; i_count > 0; i_count--)
	{
	for (o_count = i_count; 
		result = (n % (10 ** digit));
		result = (n / (10 ** digit));
		_putchar(result + '0');
	}
}
