#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to standard output
 * @letters: number of letters it should read and print
 * @filename: file being read
 * Return: 0 when  fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *d;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	d = malloc(sizeof(char) * letters);
	c = read(a, d, letters);
	b = write(STDOUT_FILENO, d, c);
			free(d);
			close(a);
			return (b);
			}
