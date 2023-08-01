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

	i = 1;
	if (*head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	tmp = *head;
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
		free(newnode);
		return (NULL);
}
