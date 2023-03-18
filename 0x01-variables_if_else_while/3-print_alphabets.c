#include <stdio.h>

/**
 * main - Print alphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char A[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(A[i]);
	}
	putchar('\n');
	return (0);
}
