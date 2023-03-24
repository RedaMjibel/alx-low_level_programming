#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: always return 0
 */
void more_numbers(void)
{
int i, j;
for (j = 0; j <= 10; j++)
{
for (i = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
