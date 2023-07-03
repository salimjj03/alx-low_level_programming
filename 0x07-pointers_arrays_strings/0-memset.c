#include "main.h"

/**
 * _memset - set a block of memory with const values
 * @s: position to fill
 * @b: value to fill
 * @n: number of byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
