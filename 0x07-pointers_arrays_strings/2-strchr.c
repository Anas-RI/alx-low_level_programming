#include "main.h"

/**
  * _strchr - Locate a character in a string
  * @s: memory address
  * @c: the character
  * Return: if @c found return a pointer else return NULL
  */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	if (*s == c)
		return (s);

	return (NULL);
}
