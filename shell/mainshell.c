#include "shell.h"

/**
 * selector - check
 *
 * @s: n arguments
 *
 * Return: always 0
 */

void selector(char *s) /*Count how many arguments are in getline and send to mallocshell.c */
{
	char delim[] = " ";
	int arg_count = 0;
	char *token;
	char *rep;

	rep = strdup(s);
	token = strtok(s, delim);
	while (token != NULL)
	{
		token = strtok(NULL, delim);
		arg_count++;
	}
	c_buffer(arg_count, rep);
	free(rep);
}

/**
 * main - check
 *
 * @ac: n arguments
 * @av: means of arguments
 *
 * Return: always 0
 */

int main(void) /* getline and send to selector */
{
	char *buffer;
	size_t bufsize = 32;

	buffer = malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		exit (1);
	}
	printf("#cisfun$ ");
	while(getline(&buffer,&bufsize,stdin) != -1)
	{
		selector(buffer);
		printf("#cisfun$ ");
	}
	return (0);
}
