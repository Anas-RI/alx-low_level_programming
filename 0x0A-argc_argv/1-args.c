#include <stdio.h>

/**
  * main - Print the number of arguments passed into the program
  * @argc: Args counter
  * @argv: Args array
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", --argc);
	return (0);
}
