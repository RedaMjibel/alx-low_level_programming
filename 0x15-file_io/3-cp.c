#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void file_close(int filedes);

/**
 * main - copies the content of a file
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int ffrom, readf, dest, writef;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_fromfile_to\n");
		exit(97);
	}
	buff = buff_create(argv[2]);
	ffrom = open(argv[1], O_RDONLY);
	readf = read(ffrom, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (readf > 0)
	{
		if (ffrom == -1 || readf == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		writef = write(dest, buff, readf);
		if (dest == -1 || writef == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		readf = read(ffrom, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buff);
	file_close(ffrom);
	file_close(dest);
	return (0);
}

/**
 * file_close - closes a file
 * @filedes: file descriptor
 *
 * Return: nothing
 */

void file_close(int filedes)
{
	int fclose;

	fclose = close(filedes);
	if (fclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes);
		exit(100);
	}
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * buff_create - creates buffer with 1024 bytes of memory
 * @fbuff: name of file
 *
 * Return: A pointer to the buffer
 */
char *buff_create(char *fbuff)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fbuff);
		exit(99);
	}
	return (buff);
}
