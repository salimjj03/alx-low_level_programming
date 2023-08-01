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
	listint_t *temp, *current;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
		free(current);
		*head = 0;
}
