#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - ...
  * @head: ...
  *
  * Return: ...
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head != NULL)
	{
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
	}
	return (0);
}
