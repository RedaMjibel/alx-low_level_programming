#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, writ, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	writ = write(file, text_content, i);
	if (writ == -1)
		return (-1);
	close(file);
	return (1);
}
