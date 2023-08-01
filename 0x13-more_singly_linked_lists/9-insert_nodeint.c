#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - add node at a given position
 * @head: positer to the head list
 * @idx: the index
 * @n: value
 * Return: newposition
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newnode;
	unsigned int i;

	tmp = *head;
	i = 1;
	if (*head != NULL)
	{
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
	newnode->n = n;
	while (tmp != NULL)
	{
	if (i == idx)
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
		return (newnode);
	}
		tmp = tmp->next;
		i++;
	}
	if (idx > i)
		return (NULL);
	}
	}
		return (NULL);
}
