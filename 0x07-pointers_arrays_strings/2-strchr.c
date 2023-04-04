#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @c: character to search for
 * @s: string given
 * Return: s[i] or NULL if character not found
*/

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
