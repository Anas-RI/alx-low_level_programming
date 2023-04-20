#include "main.h"

/**
  * _isupper - Checks for uppercase character
  * @c: the character to be checked
  * Return: 1 uppercase, 0 other
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
