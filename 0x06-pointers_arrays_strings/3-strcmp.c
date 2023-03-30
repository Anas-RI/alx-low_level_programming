#include "main.h"

/**
  * _strcmp - Compare two strings
  * @s1: string 1
  * @s2: string 2
  * Return: 0 for equal, negative if s1 less than s2, otherwise possitive
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int l = 0;

	while (s1[l] != '\0' || s2[l] != '\0')
		l++;

	while (i < l)
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
