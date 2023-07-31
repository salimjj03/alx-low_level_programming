#include "lists.h"
#include <stdlib.h>

/**
  * free_listint - Frees a list.
  * @head: The pointer to the first node of linked list
  *
  * Return: Nothing
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
