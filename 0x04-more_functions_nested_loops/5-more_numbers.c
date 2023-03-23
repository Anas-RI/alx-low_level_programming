#include "main.h"

/**
  * more_numbers - Print 10 time numbers 0 to 14 , followed by a new line
  *
  * Return: void.
  */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar(10);
	}
}

