#include"main.h"

/**
  * times_table - print 9x table
  *
  * Return: void
  */
void times_table(void)
{
	int rows = 0, columns = 0, product;

	for (rows = 0; rows < 10; rows++)
	{
		_putchar('0');
		for (columns = 1; columns < 10; columns++)
		{
			product = rows * columns;
			if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product % 10 + '0');
			}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}
		}
		_putchar(10);
	}
}
