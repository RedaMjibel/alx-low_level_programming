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
	int fout, w, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fout = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fout == -1)
		return (-1);

	w = write(fout, text_content, i);
	if (w == -1)
		return (-1);

	close(fout);

	return (1);
}
