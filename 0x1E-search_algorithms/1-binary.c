#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value found or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, m = 0, k;

	if (array != NULL)
	{
		while (i <= j)
		{
			m = (i + j) / 2;

			printf("Searching in array:");
			for (k = i; k <= j; k++)
			{
				printf(" %d", array[k]);
				if (k < j)
					printf(", ");
			}
			printf("\n");
			if (value > array[m])
			{
				i = m + 1;
			}
			else if (value < array[m])
			{
				j = m - 1;
			}
			else
			{
				return (m);
			}
		}
	}
	return (-1);
}
