#include "main.h"
/**
 * flip_bits - Flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int x;
	unsigned long int y = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
			c++;
	} return (c);
}
