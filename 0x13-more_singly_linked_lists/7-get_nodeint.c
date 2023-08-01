#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - ...
  * @head: ...
  * @index: ...
  *
  * Return: ...
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;
	i = 0;
	while (tmp != NULL)
	{
	if (i == index)
	{
		return (tmp);
	}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
