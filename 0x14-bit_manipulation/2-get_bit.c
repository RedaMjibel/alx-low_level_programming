#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given integer
 * @index: index
 *
 * Return: the converted number, or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val = 0;

	if (index > 63)
		return (-1);
	val = (n >> index);

	return (val);
}
