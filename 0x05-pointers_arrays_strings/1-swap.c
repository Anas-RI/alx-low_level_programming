#include "main.h"

/**
  * swap_int - Swap the values of two integers
  * @a: first integer
  * @b: Second integer
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
