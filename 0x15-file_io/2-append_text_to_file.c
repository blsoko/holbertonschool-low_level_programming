#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 * append_text_to_file - check the code for Holberton School students.
 *
 * @filename: file to read
 * @text_content: number of letters of the file
 *
 * Return: The possible printed letters.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writer, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	/*write */
	fd = open(filename, O_APPEND | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		;/*string length*/
		writer = write(fd, text_content, i);
		if (writer == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
