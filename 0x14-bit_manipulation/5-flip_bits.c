#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another
 * @n: given integer
 * @m: second number
 *
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num, exc;
	int i = 63, j = 0;

	exc = n ^ m;
	while (i >= 0)
	{
		num = exc >> j;
		if (num & 1)
			j++;
		i--;
	}

	return (j);
}
