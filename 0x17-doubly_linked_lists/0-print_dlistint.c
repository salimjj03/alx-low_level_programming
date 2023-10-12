#include "lists.h"

/**
 * print_dlistint - ..
 * @h: ..
 * Return: ...
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp;

	if (h != NULL)
	{
		tmp = h;
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}
