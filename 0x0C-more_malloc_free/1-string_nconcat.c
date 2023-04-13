#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 =  "";
	for (i = 0; i < strlen(s1);)
	{
		i++;
	}
	for (j = 0; j < strlen(s2);)
	{
		j++;
	}
	if (n >= j)
		l = i + j;
	else
		l = i + n;
	p = malloc(sizeof(char) * l + 1);
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
