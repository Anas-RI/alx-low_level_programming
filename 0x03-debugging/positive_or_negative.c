#include<stdio.h>
/**
 * positive_or_negative - Define whether a number is positive or negative
 * @i: the number to test
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
		if (i > 0)
			printf("%d is positive\n", i);
		else if (i == 0)
			printf("%d is zero\n", i);
		else
			printf("%d is negative\n", i);
}
