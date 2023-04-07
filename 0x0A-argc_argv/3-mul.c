#include <stdio.h>
#include <stdlib.h>

/**
  * main - Multiplies two numbers
  * @argc: args counter
  * @argv: args array
  * Return: 0 success, 1 error
  */

int main(int argc, char *argv[])
{
	int i;
	int result = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			result *= atoi(argv[i]);

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
