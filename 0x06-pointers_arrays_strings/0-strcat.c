#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int j = 0, i;
while (dest[j] != '\0')
{
j++;
}
for (i = 0; src[i] != 0; i++)
{
dest[j] = src[i];
j++;
}
dest[j] = '\0';
return (dest);
}
