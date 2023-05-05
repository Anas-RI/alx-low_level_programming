#include "main.h"
/**
 * set_bit - Set a value of a bit to 1 at given index
 * @n: Number
 * @index: Index
 * Return: 1 success, -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

