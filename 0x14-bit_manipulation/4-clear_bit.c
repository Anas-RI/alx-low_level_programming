#include "main.h"

/**
 * clear_bit - Set value of a bit to 0 at given index.
 * @n: number
 * @index: index
 *
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
