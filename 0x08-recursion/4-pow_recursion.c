#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: given integer
 * @y: power value
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
	return (1);
return (x * _power_recursion(x, y - 1));
}
