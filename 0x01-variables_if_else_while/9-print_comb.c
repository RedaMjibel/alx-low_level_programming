#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 *  * main - Entry point
 *   * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar('0' + n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
