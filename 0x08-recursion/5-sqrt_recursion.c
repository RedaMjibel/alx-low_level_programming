#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Returns if a number is prime
 * @n: given integer
 * Return: square root of a number
 */
int is_prime_number(int n)
{
return (ckeck_prime(n, 1);
}
/**
 * ckeck_prime - ckeck if number is prime
 * @n: given integer
 * @i: number of iterations
 * Return: 1 if prime 0 else
 */
int ckeck_prime(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (check_prime(n, i +1));
}