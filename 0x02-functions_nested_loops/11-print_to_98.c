#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98,followed by a new line
 * @n: number to print
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else if (n > 98)
			n--;
	}
	printf("%d\n", n);
}
