#include "lists.h"
/**
  * add_node - Adds a new node at the beginning of a list_t list.
  * @head: list_t list's head
  * @str: string to add in a node
  * Return: Address of new element, Null if failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	while (str[len])
		len++;
	node->str = strdup(str);
	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}
