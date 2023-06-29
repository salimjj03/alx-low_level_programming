#include "main.h"

/**
 * _strcat - return concatenated string
 * @dest: first string
 * @src second string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len += i;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[len + j] = '\0';
		return (dest);
}
