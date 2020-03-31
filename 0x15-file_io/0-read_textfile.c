#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 * read_textfile - check the code for Holberton School students.
 *
 * @filename: file to read
 * @letters: number of letters of the file
 *
 * Return: The possible printed letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader, writer, cierre;

	char *ptr;

	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		free(ptr);
		return (0);
	}
	reader = read(fd, ptr, letters);
	writer = write(STDOUT_FILENO, ptr, (ssize_t)reader);
	if (writer == -1)
	{
		free(ptr);
		return (0);
	}
	if (reader != writer)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	cierre = close(fd);
	if (cierre == -1)
		return (0);
	return (writer);
}
