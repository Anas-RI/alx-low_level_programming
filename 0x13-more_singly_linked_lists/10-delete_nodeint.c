#include "lists.h"
/**
  * delete_nodeint_at_index - deletes a node in a linked list at an index
  * @head: Head pointer
  * @index: index of the node
  * Return: 1
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (; i < index - 1; i++)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
	}
	node = tmp->next;
	tmp->next = node->next;
	free(node);
	return (1);
}
