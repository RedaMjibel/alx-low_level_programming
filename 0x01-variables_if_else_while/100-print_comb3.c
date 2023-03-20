#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

/**
 * * main - Entry point
 * * Return: Always 0 (Success)
 */
int main(void)
{
int n, l;
for (n = '0'; n <= '9'; n++)
{
for (l = n + 1; l <= '9'; l++)
{
if (l != n)
putchar(n);
putchar(l);
if (n == '8' && l == '9')
continue;
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
