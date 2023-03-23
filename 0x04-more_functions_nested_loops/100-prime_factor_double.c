#include <stdio.h>
#include <math.h>
/**
  * main -  Find and print the largest prime factor of a number, new line.
  *
  * Return: 0 Success
  */

int main(void)
{
	double i;
	int primeF;
	double num = 612852475143;

	for (i = 2; num > 1; i++)
	{
		while (fmod(num, i) == 0)
		{
			num = num / i;
			primeF = i;
		}
	}
	printf("%d\n", primeF);
	return (0);
}
