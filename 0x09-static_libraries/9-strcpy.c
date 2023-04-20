#include "main.h"

/**
  * char *_strcpy - A function that copies the string pointed to by src
  * @dest: copy to
  * @src: copy from
  * Return: dest
  */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y;

	while (*(src + x) != '\0')
		x++;

	for (y = 0; y < x; y++)
		dest[y] = src[y];

	dest[x] = '\0';

	return (dest);
}
