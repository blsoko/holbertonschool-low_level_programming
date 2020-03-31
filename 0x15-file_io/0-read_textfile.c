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
	int fd;
	ssize_t store = 0;
	ssize_t casteo;
	char buf[100000];

	casteo = (ssize_t)letters;
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	store = read(fd, buf, letters);
	if (store != casteo)
	{
		store++;
	}
	buf[letters + 1] = '\0';
	printf("%s\n", buf);
	close(fd);
	return (store);
}
