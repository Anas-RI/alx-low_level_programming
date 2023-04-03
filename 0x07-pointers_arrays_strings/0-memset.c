#include "main.h"

/**
  * _memset - Fills memory with a constant byte
  * @s: memory address
  * @b: constant byte
  * @n: the first bytes from memory
  * Return: @s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		*(s + i) = b;

	return (s);
}
