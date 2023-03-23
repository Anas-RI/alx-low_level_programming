#include "main.h"

/**
  * print_square - Prints a square
  * @size: size of the square
  * Return: void
  */

void print_square(int size)
{
	int v;
	int d;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (v = 0; v < size; v++)
		{
			for (d = 1; d < size; d++)
				_putchar(35);

			_putchar(35);
			_putchar(10);
		}
	}
}
