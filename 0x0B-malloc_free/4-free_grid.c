#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - frees previously allocated memory
 * @grid: double pointer
 * @height: height of array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
int i = 0;

for (i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
