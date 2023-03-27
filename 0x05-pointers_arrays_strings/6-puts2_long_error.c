#include "main.h"

/**
  * puts2 - Print every other character of a string, followed by new line
  * @str: the string var
  */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
		str++;
	}
	_putchar('\n');
}
