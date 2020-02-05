#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf ("Size of a char: %c\n", sizeof(char), " bit(s)");
	printf ("Size of an int: %u\n", sizeof(int), " bit(s)");
	printf ("Size of a long int: %lu\n", sizeof(int), " bit(s)");
	printf ("Size of a long long int: %llu\n", sizeof(int), " bit(s)");
	printf ("Size of a float: %f\n", sizeof(float), " bit(s)");
	return (0);
}
