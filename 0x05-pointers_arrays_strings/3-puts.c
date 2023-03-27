#include "main.h"

/**
  * _puts - Print a string, followed by new line
  * @str: the string var
  */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
