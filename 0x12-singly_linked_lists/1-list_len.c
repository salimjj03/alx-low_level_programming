#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - ....
 * @h: start of the node
 * Return: ....
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
		return (len);
}
