#include "main.h"

/**
 * _strcmp - compare strings
 * @s2: string 2
 * @s1: string 1
 * Return: difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
