#include "lists.h"
/**
  * get_nodeint_at_index - Return the nth node of a listint_t linked list
  * @head: head node
  * @index: index of the node
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	for (; tmp && i < index; i++)
		tmp = tmp->next;
	return (tmp ? tmp : NULL);
}
