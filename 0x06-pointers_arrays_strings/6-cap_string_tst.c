#include "main.h"

/**
  * cap_string - Capitalize all words of a string
  * @str: string
  * Return: @str
  */

char *cap_string(char *str)
{
	int i;
	int j;
	char key[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		while (!(str[i] >= 97 && str[i] <= 122))
			i++;

		for (j = 0; j < 13; j++)
		{
			if (str[i - 1] == key[j])
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
