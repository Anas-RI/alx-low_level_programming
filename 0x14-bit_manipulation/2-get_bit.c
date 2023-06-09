#include "main.h"
/**
 * get_bit - Return value of a bit at given index
 * @n: Number
 * @index: Index
 *
 * Return: Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}

