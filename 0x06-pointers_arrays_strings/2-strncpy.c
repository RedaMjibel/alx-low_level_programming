#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (src[i] != '\0')
{
j++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[i] = src[i];
}
for (i = j; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
