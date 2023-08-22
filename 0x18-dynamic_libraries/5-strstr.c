#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: allways return 0
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++;
}
if (*two == '\0')
return (haystack);
}
return (NULL);
}
