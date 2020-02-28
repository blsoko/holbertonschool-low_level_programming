#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int cents = 0;
	int number = atoi(argv[1]);

	while (number != 0)
	{
		if (number % 25 == 0)
		{
			cents++;
			number -= 25;
		}
		else if (number % 10 == 0)
		{
			cents++;
			number -= 10;
		}
		else if (number % 5 == 0)
		{
			cents++;
			number -= 5;
		}
		else if (number % 2 == 0)
		{
			cents++;
			number -= 2;
		}
		else if (number % 1 == 0)
		{
			cents++;
			number--;
		}
		else
		{
			break;
		}

	}
	printf ("%d\n", cents);
	return(argc);
}
