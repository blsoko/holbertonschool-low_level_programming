#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 * closefile1 - close the files
 *
 * @par: fd
 *
 * Return: nothing.
 */

void closefile1(int par)
{
	closefile = close(par);
	if (closefile == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", par);
		exit(100);
	}
}
/**
 * main - copy a file
 *
 * @argc: arguments counts
 * @argv: contents of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int readfile, writefile, closefile;
	int fromfile, tofile;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fromfile = open(argv[1], O_RDONLY);
	if (fromfile == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	tofile = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (tofile == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	for (readfile = 1024; readfile == 1024;)
	{
		readfile = read(fromfile, buff, 1024);
		if (readfile == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writefile = write(tofile, buff, readfile);
		if (writefile == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closefile1(fromfile);
	closefile1(tofile);
	return (0);
}

