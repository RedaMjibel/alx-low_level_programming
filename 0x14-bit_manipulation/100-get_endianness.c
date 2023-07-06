#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * get_endianness - checks the endiannes
 *
 *
 * Return:  0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;

	if (*c != 0)
		return (1);
	else
		return (0);
}
