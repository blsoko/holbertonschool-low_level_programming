#include <stdio.h>

/**
* main - writes the character c to stdout
*
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int main(void)
{
	int count;

	for (count = 1; count < 101; count++)
	{
		if (count % 3 == 0 && !(count % 5 == 0))
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0 && !(count % 3 == 0))
		{
			if (count != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else if (count % 5 == 0 && count % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("\n");
	return (0);
}
