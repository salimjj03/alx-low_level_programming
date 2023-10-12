#include "lists.h"

/**
 * get_dnodeint_at_index - ..
 * @head: ..
 * @index: ..
 * Return: ..
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
