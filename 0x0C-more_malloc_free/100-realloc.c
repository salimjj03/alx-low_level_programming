#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - ...
  * @ptr: poit to aold size
  * @old_size:ald size
  * @new_size: new size
  * Return: pointer to new size
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (new_size > old_size)
	{
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
	{
		p[i] = ((char *) ptr)[i];
	}
		free(ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	if (new_size == 0 &&  ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
		return (p);
}
