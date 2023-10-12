#include "lists.h"

/**
 * sum_dlistint - ..
 * @head: ..
 * Return: ..
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
