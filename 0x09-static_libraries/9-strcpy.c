#include "main.h"

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
