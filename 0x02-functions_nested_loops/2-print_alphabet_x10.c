#include"main.h"
/**
  * print_alphabet_x10 - yes, same stuff just 10 times more
  *
  * Return: void
  */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}
}
