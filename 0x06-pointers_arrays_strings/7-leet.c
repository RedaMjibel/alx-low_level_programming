#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to array
 * Return: str
 */

char *leet(char *str)
{
char a[] = "aeotlAEOTL";
char b[] = "4307143071";
int i = 0;
int j;
while (*(str + i) != '\0')
{
for (j = 0; j <= 9; j++)
{
if (*(str + i) == a[j])
{
*(str + i) = b[j];
}
}
i++;
}
return (str);
}
