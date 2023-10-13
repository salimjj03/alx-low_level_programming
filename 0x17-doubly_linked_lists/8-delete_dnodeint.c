#include "lists.h"

/**
 * delete_dnodeint_at_index - ..
 * @head: ..
 * @index: ..
 * Return: ..
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		tmp->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL)
	{
		if (i == index)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
