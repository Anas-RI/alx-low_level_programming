#include "main.h"

/**
  * print_triangle - Prints a triangle
  * @size: Size of triangle
  * Return: void
  */

void print_triangle(int size)
{
	int a;
	int b;
	int c;
	int d = size;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = (d - 1); b > 0; b--)
			{
				_putchar(' ');
			}
				for (c = 0; c < a; c++)
				{
					_putchar(35);
				}
			_putchar(35);
			_putchar(10);
			d--;
		}
	}
}
