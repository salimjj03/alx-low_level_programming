#include "lists.h"

/**
 * dlistint_len - ..
 * @h: ..
 * Return: ...
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp;

	if (h != NULL)
	{
		tmp = h;
		while (tmp != NULL)
		{
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}
