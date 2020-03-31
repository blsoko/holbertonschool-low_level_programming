#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 * create_file - check the code for Holberton School students.
 *
 * @filename: file to read
 * @text_content: number of letters of the file
 *
 * Return: The possible printed letters.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writer, reader, cierre, i;
	char *ptr;

	/*write */

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (0);
	}
	for (i = 0; text_content[i]; i++)/*string length*/
	;
	writer = write(fd, text_content, i);
	if (writer == -1)
	{
		return (0);
	}
	close(fd);

	/* read */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (0);
	reader = read(fd, ptr, i);
	if (reader != writer)
	{
		free(ptr);
		return (0);
	}
	ptr[i] = '\0';
	cierre = close(fd);
	if (cierre == -1)
		return (0);
	free(ptr);
	return (1);
}
