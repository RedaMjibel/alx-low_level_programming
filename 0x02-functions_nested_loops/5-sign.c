#include "main.h"

/**
 * print_sign -  checks for the sign of a number
 * @n: The character to be checked
 * Return: 1 for greater than zero or 0 for zero or -1 for anything else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
