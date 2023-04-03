#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: adress of the array
 * @b: value to be used
 * @n: block of memory to be filled
 * Return: *S
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
