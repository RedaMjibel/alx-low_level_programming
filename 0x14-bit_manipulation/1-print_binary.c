#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: given integer
 *
 * Return: the converted number, or 0
 */

void print_binary(unsigned long int n)
{
	int c = 0, i = 0;
	unsigned long int pos;

	for (i = 63; i >= 0; i--)
	{
		pos = n >> i;
		if (pos & 1)
		{
			printf("1");
			c++;
		}
		else if (c != 0)
			printf("0");
	}
	if (c == 0)
		printf("0");
}
