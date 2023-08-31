#include "main.h"
#include <stdio.h>

/**
 * _strlen - find the length of a string
 * @s: string to be count
 * Return: return l
 */

int _strlen(const char *s)
{
	 int l = 0;

	for ( ; *s != '\0'; s++)
	{
		l += 1;
	}
	return (l);
}

/**
 * binary_to_uint - ....
 * @b:...
 * Return: ...
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, value = 0;
	int l;

	if (b == NULL)
	{
		return (0);
	}
	l = _strlen(b) - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (((b[i] - '0') != 1) && ((b[i] - '0') != 0))
		{
			return (0);
		}
		if (l == 0 && b[i] - '0' == 1)
		{
			value = value + 1;
			return (value);
		}
		value = value + ((b[i] - '0') * (2 << (l - 1)));
		l--;
	}
	return (value);
}
