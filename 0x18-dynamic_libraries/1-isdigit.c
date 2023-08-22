#include "main.h"

/**
 * _isdigit - Checks if given value is a digit
 * @c: char to be checked
 * Return: 1 if digit or 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
