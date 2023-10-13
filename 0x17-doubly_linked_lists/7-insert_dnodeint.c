#include "lists.h"

/**
 * insert_dnodeint_at_index - ..
 * @h: ..
 * @idx: ..
 * @n: ..
 * Return: ..
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *newnode;
	unsigned int i = 0;

	if (idx > 0 && *h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	tmp = *h;
	if (idx == 0)
	{
		newnode->next = tmp;
		newnode->prev = NULL;
		if (tmp != NULL)
			tmp->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (tmp != NULL)
	{
		if (i == idx)
		{
			newnode->next = tmp;
			newnode->prev = tmp->prev;
			tmp->prev->next = newnode;
			return (newnode);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
