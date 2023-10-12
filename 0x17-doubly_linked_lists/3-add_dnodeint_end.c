#include "lists.h"

/**
 * add_dnodeint_end - ..
 * @head: ..
 * @n: ...
 * Return: ..
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		tmp = *head;
		while (tmp != NULL)
		{
			if (tmp->next == NULL)
			{
				newnode->prev = tmp;
				tmp->next = newnode;
				tmp = newnode;
			}
			tmp = tmp->next;
		}
	}
	return (newnode);
}
