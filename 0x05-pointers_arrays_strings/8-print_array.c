#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: parameter
 * @a: parameter
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i <= n - 2; i++)
{
printf("%d, ", a[i]);
}
for (i = n - 1; i < n; i++)
printf("%d", a[i]);
printf("\n");
}
