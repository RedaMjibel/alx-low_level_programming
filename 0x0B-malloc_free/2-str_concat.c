#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -  concatenates two strings
 * @s1: string given
 * @s2: string given
 * Return: pointer or NULL in case of fail
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, k = 0, l = 0;
char *p;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i])
	i++;
while (s2[j])
	j++;
l = i + j;
p = malloc((sizeof(char) * l) +1);
if (p == NULL)
	return (NULL);
j = 0;
while (k < l)
{
	if (k <= i)
		p[k] = s1[k];
	if (k >= i)
	{
		p[k] = s2[j];
		j++;
	}
	k++;
}
p[k] = '\0';
return (p);
}
