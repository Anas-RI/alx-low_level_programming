#include <stdio.h>

/**
  * main - Print all arguments program receives
  * @argc: args counter
  * @argv: args array
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);

}
