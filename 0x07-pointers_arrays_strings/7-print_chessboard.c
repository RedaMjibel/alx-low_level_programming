#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * print_chessboard - print_chessboard
 * @a: string
*/

void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
printf("\n");
}
