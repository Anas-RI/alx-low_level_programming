#include "lists.h"
/**
  * list_len - Returns number of elements in a list_t list
  * @h: list_t list
  * Return: the number of elements
  */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	} return (c);
}
