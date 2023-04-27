#include <stdio.h>
#include "lists.h"
/**
  * print_list - Prints all the elements of a list_t list
  * @h: list_t list
  * Return: the number of nodes printed
  */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		c++;
	} return (c);
}
