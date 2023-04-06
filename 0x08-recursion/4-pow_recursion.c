#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: given integer
 * @y: power value
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
int i = 1, m = 1;
if (y < 0)
return (-1);
for (i = 1; i <= y; i++)
{
	m = m * x;
}
return (m);
}
