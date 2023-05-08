#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to read
 * @letters: the letter of number to be read
 * Return: a- actual number of bytes read and printed
 * 0 when function filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *call;
	ssize_t fd;
	ssize_t a;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	call = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	a = write(STDOUT_FILENO, call, t);

	free(call);
	close(fd);
	return (a);
}
