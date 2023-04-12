#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer or NULL in case of fail
 */

int **alloc_grid(int width, int height)
{
int i = 0, j = 0, k = 0, l = 0;
int **array;
if (width == 0)
	return (NULL);
if (height == 0)
	return (0);

array = malloc(sizeof(int *) * height);
if (array == NULL)
{
	free(array);
	return (NULL);
}

for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
	for (j = i; j >= 0; j--)
	{
		free(array[j]);
	}
	free(array);
	return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
	array[k][l] = 0;
}
}
return (array);
}
