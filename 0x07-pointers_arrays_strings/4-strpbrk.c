#include "main.h"

/**
  * _strpbrk - Searche a string for a set of bytes
  * @s: string
  * @accept: substring
  * Return: s or NULL
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
