#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf ("Size of a char: %c\n byte(s)", sizeof(char));
	printf ("Size of an int: %u\n byte(s)", sizeof(int));
	printf ("Size of a long int: %lu\n byte(s)", sizeof(int));
	printf ("Size of a long long int: %llu\n byte(s)", sizeof(int));
	printf ("Size of a float: %f\n byte(s)", sizeof(float));
	return (0);
}
