#include "main.h"

/**
 * _strncat - return concatenated string
 * @dest: first string
 * @src: second string
 * @n: int variable
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len += i;
	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[(i + j) + 1] = '\0';
		return (dest);
}
