#include "lists.h"
/**
 * add_node_end - Adds a new node in the end of a list_t list.
 * @head: list_t list's head
 * @str: string to add in a node
 * Return: Address of new element, Null if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp = *head;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	while (str[len])
		len++;
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;

	return (node);
}
