#include "main.h"

/**
 * _memcpy - copy n of byte
 * @dest: destinatio
 * @src: source
 * @n: number of byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
