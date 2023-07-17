#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * new_dog - create new dog
  * @name: name of the dog
  * @age:age of the dog
  * @owner: ownr of the dog
  *
  * Return: p
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}

