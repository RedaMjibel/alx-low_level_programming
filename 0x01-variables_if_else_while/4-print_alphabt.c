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
char c, q = 'q', e = 'e';
for (c = 'a'; c <= 'z'; c++)
{
if (c != q && c != e)
{
putchar(c);
}
}
putchar('\n');
return (0);
}
