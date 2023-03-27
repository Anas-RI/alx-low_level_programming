#include "main.h"

/**
  * print_rev - Print a string in reverse followed by new line
  * @s: the sting var
  */
void print_rev(char *s)
{
	int length = 0;
	int r;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (r = length; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
