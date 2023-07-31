#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node at end
 * @head: the list
 * @n: the value
 * Return: newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	if (*head == NULL)
	{
		newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = 0;
		*head = newnode;
		return (newnode);
	}
	}
	else
	{
	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = 0;
	while (tmp->next != 0)
	{
		tmp = tmp->next;
	}
		tmp->next = newnode;
	}
	}
		return (newnode);
}
