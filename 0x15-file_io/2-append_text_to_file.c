#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: a NULL terminated string
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fout, w, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	fout = open(filename, O_WRONLY | O_APPEND);
	if (fout == -1)
		return (-1);
	w = write(fout, text_content, i);
	if (w == -1)
		return (-1);
	close(fout);
	return (1);
}
