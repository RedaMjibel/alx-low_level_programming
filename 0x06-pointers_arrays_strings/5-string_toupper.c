#include "main.h"

/**
 * string_toupper - changes a string to uppercase
 * @str: pointer to array
 * Return: str
 */

char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
