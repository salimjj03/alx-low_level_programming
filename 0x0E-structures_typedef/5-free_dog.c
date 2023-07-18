#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free new dog
  * @d: the structure
  *
  * Return: nothing
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
