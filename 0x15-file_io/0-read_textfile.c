#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: filename
 * @letters: number of letters
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fout;
	ssize_t w;
	ssize_t r;
	char *buffer;

	fout = open(filename, O_RDONLY);
	if (fout == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	r = read(fout, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	close(fout);
	free(buffer);
	return (w);
}
