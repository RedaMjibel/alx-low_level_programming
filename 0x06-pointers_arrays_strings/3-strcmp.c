#include "main.h"

/**
 * _strcmp - compare strings
 * @s2: string 2
 * @s1: string 1
 * Return: 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, f = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
f = 1;
break;
}
i++;
}
if (f == 0)
return (0);
else
return (1);
}
