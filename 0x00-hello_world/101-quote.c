#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *imp = ("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
while (*imp)
putchar(*imp++);
return (1);
}
