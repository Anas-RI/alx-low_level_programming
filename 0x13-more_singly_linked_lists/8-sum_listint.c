#include "lists.h"
/**
  * sum_listint - Calculate the sum of all the data in a listint_t list
  * @head: Head node
  * Return: Sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	for (; tmp; tmp = tmp->next)
		sum += tmp->n;
	return (sum);
}
