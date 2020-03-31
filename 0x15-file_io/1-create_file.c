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

	if (filename == NULL)
	{
		return (-1);
	}
	/*write */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)/*string length*/
	;
	if (text_content != NULL)
	{
		writer = write(fd, text_content, i);
		if (writer == -1)
			return (-1);
	}
	close(fd);
	/* read */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (-1);
	reader = read(fd, ptr, i);
	if (reader != writer)
	{
		free(ptr);
		return (-1);
	}
	ptr[i] = '\0';
	cierre = close(fd);
	if (cierre == -1)
		return (-1);
	free(ptr);
	return (1);
}
