#include "main.h"

/**
  * puts_half - Print half of a string, followed by new line
  * @str: the string var
  */

void puts_half(char *str)
{
	int length = 0;
	int i, h;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	if ((length % 2) == 1)
		h = (length + 1) / 2;
	else
		h = length / 2;

	for (i = h; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
