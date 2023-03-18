#include <stdio.h>

/**
 * main - Prints all lowercase letters except 'q' and 'e'
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char A[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (A[i] != 'q' && A[i] != 'e')
		putchar(A[i]);
	}
	putchar('\n');
	return (0);
}
