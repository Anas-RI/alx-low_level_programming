#include "main.h"
/**
  * _isdigit - Checks for a digit 0 through 9
  * @c: Variable to be checked
  * Return: 1 digit, 0 other
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
