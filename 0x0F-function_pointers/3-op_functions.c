#include "3-calc.h"

/**
 * op_add - Sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: SUM.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Quotient.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Remainder of the division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
