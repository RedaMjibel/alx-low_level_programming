#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: given integer
 * @index: index
 *
 * Return: the converted number, or 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int uint = 1;

	if (index > 63)
		return (-1);
	*n = ((uint << index) | *n);

	return (1);
}
