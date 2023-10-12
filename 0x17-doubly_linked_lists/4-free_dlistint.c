#include "lists.h"

/**
  * free_dlistint - ..
  * @head: ..
  *
  * Return: ..
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *c_node, *n_node;

	c_node = head;
	n_node = NULL;
	while (c_node != NULL)
	{
		n_node = c_node->next;
		free(c_node);
		c_node = n_node;
	}
}
