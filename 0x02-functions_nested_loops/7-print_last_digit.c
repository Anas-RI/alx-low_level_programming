#include"main.h"

/**
 * print_last_digit - print last digit
 * @x: the number to be treated
 * Return: Value of the last digit of x
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y < 0)
	{
	y = y * -1;
	}
	_putchar(y + 48);
	return (y);
}
