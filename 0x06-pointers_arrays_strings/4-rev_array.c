#include "main.h"

/**
  * reverse_array - Reverse the content of an array of integers
  * @a: Array of integers
  * @n: Number of element
  */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
