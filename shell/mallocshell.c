#include "shell.h"


/**
 * exe - print executables
 *
 * @string: space
 *
 * Return: nothing
 */

void exe(char **string) /* execute and print to stdout */
{
	pid_t child_pid;
    	int status;
	struct stat st;

	printf("------------------------------------------\n");
	if(stat(string[0], &st) == -1) /*write falta */
	{
		perror(string[0]);
		return;
	}
	/* Falta hacer el stat */
	child_pid = fork();
	if (child_pid == 0)
    	{
		if (execve(string[0], string, NULL) == -1)
    		{
        		perror(string[0]);
    		}
    	}
	if (child_pid > 0)
	{
		wait(&status);
	}
}

void assignValues(char **ptr, char *s, int cont)
{
	char *token;
	char delim[] = " ";
	int i = 0, j = 0;

	token = strtok(s, delim);
	for (i = 0; i < cont || token != NULL; i++)
	{
		for(j = 0; token[j] != '\0'; j++)
		{
			ptr[i][j] = token[j];
		}
		token = strtok(NULL, delim);
	}
	ptr[i - 1][j - 1] = '\0';
	ptr[i] = NULL;
	exe(ptr);
	for (i = 0; i < cont; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
}
/**
 * st_contador - string contador
 *
 * @string: getline
 *
 * Return: n characters per word
 */

int st_contador (char *string) /*string contador from c_buffer*/
{
	int index;

	for (index = 0; string[index] != '\0' ; index++)
	{
	}
	return (index);
}

/**
 * c_buffer - malloc create
 *
 * @st: getline
 * @contador: lines contador
 *
 * Return: n characters per word
 */

void c_buffer(int contador, char *st) /*creation of malloc and send to exe*/
{
	char **space;
	int i, j, ite = 0, letters = 0;
	char *token;
	char *ptr1;
	char delim[] = " ";

	space = malloc(sizeof(char*) * contador + 1);
	if (space == NULL)
	{
		return;
	}
	ptr1 = strdup(st);
	token = strtok(st, delim);
	for (i = 0; i < contador || token != NULL; i++) /*contador = 1*/
	{
		letters = st_contador(token);
		token = strtok(NULL, delim);
		space[i] = malloc(sizeof(char) * letters);
		if (space[i] == NULL)
		{
			for (ite = 0; ite < contador; ite++)
			{
				free(space[ite]);
			}
			free(space);
			return;
		}
		for (j = 0; j < letters; j++)
	      	{
			space[i][j] = 0;
		}
	}
	assignValues(space, ptr1, contador); 
	free(ptr1);
}
