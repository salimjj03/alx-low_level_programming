#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - Frees a list.
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head != NULL)
	{
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	}
	else
	{
		return;
	}
		free(*head);
		*head = 0;
}
