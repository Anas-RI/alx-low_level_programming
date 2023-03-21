#include "main.h"
/**
  * main - Prints _putchar, followed by a new line
  *
  * Return: 0 Success
  */
int main(void)
{
	int ascii[] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (int i = 0; i < sizeof(ascii) / sizeof(ascii[0]); i++)
	{
		_putchar(ascii[i]);
	}

	_putchar('\n');
	return (0);
}
