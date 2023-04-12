#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string given
 * Return: pointer or NULL in case of fail
 */

char *_strdup(char *str)
{
unsigned long int i = 0, j = 0;
char *p;

if (str == NULL)
	return (NULL);
for (i = 0; i < strlen(str);)
{
	i++;
}
p = malloc((sizeof(char) * i) + 1);
if (p == NULL)
	return (NULL);
while (j < i)
{
	p[j] = str[j];
	j++;
}
p[j] = '\0';
return (p);
}
