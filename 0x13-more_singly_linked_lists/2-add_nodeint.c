#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at beginning
 * @head: the list
 * @n: value of newnode
 * Return: newnode
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp, *newnode;

	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = tmp;
	tmp = newnode;
	*head = tmp;
	return (newnode);
}
