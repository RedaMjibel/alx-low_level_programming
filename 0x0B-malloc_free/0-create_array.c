#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to be inserted
 * Return: pointer or NULL in case of fail
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;

if (size == 0)
	return (NULL);
p = malloc(size * sizeof(char));
if (p == NULL)
	return (NULL);
for (i = 0; i < size; i++)
{
	p[i] = c;
}
return (p);
}
