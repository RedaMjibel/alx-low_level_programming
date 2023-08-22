#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string
 * @accept: second string
 * Return: allways return 0
*/

char *_strpbrk(char *s, char *accept)
{
int i, n;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
	return (s + i);
}
}
return (NULL);
}
