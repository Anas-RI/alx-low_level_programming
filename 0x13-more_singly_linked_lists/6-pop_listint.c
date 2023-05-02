#include "lists.h"
/**
  * pop_listint - Delete the head node of a listint_t linked list
  * @head: head node
  * Return: Data of @head
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int c;

	if (!head || !*head)
		return (0);
	c = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (c);
}
