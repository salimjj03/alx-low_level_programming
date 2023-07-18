#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - find the length of a string
 * @s: string to be count
 * Return: return l
 */

int _strlen(char *s)
{
	 int l = 0;

	for ( ; *s != '\0'; s++)
	{
		l += 1;
	}
	return (l);
}

/**
 * _strcpy - copy pointer to another pointer
 * @dest: fist pointer
 * @src: second pointer
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
		return (dest);
}

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
	p->name  = malloc(_strlen(name + 1));
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	_strcpy(p->name, name);
	p->owner = malloc(_strlen(owner + 1));
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	_strcpy(p->owner, owner);
	p->age = age;
	return (p);
}
