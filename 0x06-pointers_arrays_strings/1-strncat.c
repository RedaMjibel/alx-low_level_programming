#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int j = 0, lengs = 0;
while (dest[j] != '\0')
{
j++;
}
for (lengs = 0; src[lengs] && lengs < n; lengs++)
{
dest[j++] = src[lengs];
}
return (dest);
}
