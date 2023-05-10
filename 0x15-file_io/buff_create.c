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
