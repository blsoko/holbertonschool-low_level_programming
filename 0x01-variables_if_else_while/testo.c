#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
 	

	for(i = 0; i < 100 ; i++){

   	 	putchar((i/10)+'0');
    		putchar((i%10)+'0');
    		if (i < 99)
		{
			putchar(44);
			putchar(' ');
		}
	}
	
	
	putchar('\n');
	return (0);
}

