#include "main.h"

int sqrt_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_recursion(n, 0));
}

/**
 * sqrt_recursion - recurses to find the natural square root of a number
 * @x: number
 * @y: iterator
 *
 * Return: the resulting square root
 */

int sqrt_recursion(int x, int y)
{
	if (y * y > x)
		return (-1);

	if (y * y == x)
		return (y);

	return (sqrt_recursion(x, y + 1));
}

