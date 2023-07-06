#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: given integer
 * @index: index
 *
 * Return: the converted number, or 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*unsigned long int uint = 1;*/

	if (index > 63)
		return (-1);
	*n = ((0 << index) | *n);

	return (1);
}
