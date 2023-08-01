#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all node
 * @h: the list
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t n_node = 0;
	const listint_t *tmp;

	tmp = h;
	while (tmp != 0)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		n_node++;
	}
		return (n_node);
}
