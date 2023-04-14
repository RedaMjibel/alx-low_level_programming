#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: min number
 * @max: max number
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i = 0, j = min, size = 0;
	int *p;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	while (j <= max)
	{
		p[i] = j;
		i++;
		j++;
	}
	return (p);
}
