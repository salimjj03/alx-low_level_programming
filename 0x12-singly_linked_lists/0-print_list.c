#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - ....
 * @h: start of the node
 * Return: ....
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	int i = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
	temp = h;
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	}
		return (i);
}
