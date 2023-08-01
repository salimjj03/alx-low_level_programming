#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to the head
 * @index: the index
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *d_node, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index < 1)
	{
		d_node = *head;
		*head = (*head)->next;
		free(d_node);
		return (1);
	}
	tmp = *head;
	while (tmp != NULL)
	{
	if (i == index)
	{
		d_node->next = tmp->next;
		free(tmp);
		return (1);
	}
		d_node = tmp;
		tmp = tmp->next;
		i++;
	}
		return (-1);
}
