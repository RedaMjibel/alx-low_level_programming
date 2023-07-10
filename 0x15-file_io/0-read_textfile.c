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
	ssize_t f;
	ssize_t wrbytes;
	ssize_t fread;
	char *buffer;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fread = read(f, buffer, letters);
	wrbytes = write(STDOUT_FILENO, buffer, fread);

	close(f);
	return (wrbytes);
}
