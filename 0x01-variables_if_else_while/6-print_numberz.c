#include <stdio.h>

/**
 * main -	Prints all singal digit numbers of base 10 starting from 0
 *		with only two "putchar()" function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
