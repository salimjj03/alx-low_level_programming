#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print number of node
 * @h: the list
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t n_node = 0;
	const listint_t *tmp;

	tmp = h;
	while (tmp != 0)
	{
		tmp = tmp->next;
		n_node++;
	}
		return (n_node);
}
