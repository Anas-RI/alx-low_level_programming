#include "main.h"

/**
  * puts2 - Print every other character of a string, followed by new line
  * @str: the string var
  */

void puts2(char *str)
{
	char *string = str;
	int length = 0;
	int i;

	while (*string != '\0')
	{
		string++;
		length++;
	}
	length--;
	for (i = 0; i <= length; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
