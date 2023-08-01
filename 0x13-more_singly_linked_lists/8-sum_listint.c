#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum all element of list
 * @head: pointer to the head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	if (head != NULL)
	{
		tmp = head;
	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}
		return (sum);
	}
		return (0);
}
