#include "main.h"

int prime(int x, int y);

/**
 * is_prime_number - find prime number
 * @n: number
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - calculates if a number is prime recursively
 * @x: number
 * @y: iterator
 *
 * Return: 1 if x is prime, 0 if not
 */

int prime(int x, int y)
{
	if (y == 1)
		return (1);
	if (x % y == 0 && y > 0)
		return (0);
	return (prime(x, y - 1));
}
