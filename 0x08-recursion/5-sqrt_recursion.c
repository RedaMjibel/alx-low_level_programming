#include "main.h"
#include <stdio.h>

/**
 * _sqrtcal - entry point
 * @n: given integer
 * @i: number to iterate
 * Return: square root of a number
 */
int _sqrtcal(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
return (_sqrtcal(n, i + 1));
}
/**
 * _sqrt_recursion - calculates square root of a number
 * @n: given integer
 * Return: square root value
 */
int _sqrt_recursion(int n)
{
return (_sqrtcal(n, 1));
}
