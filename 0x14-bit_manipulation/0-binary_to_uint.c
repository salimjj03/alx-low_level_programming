#include "main.h"
#include <stdlib.h>

int _strlen(const char *s);
int pw(int a, unsigned int b);

/**
 * binary_to_uint - convert binary to unsigned in
 * @b: pointer to the string
 * Return: un int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, a = 0, c;

	len = _strlen(b);
	c = len - 1;
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] - '0' != 0  && b[i] - '0' != 1)
		{
			return (0);
		}
			a = a + (b[i] - '0') * (pw(2, c));
			c--;
	}
		return (a);
}

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
 * pw - find power
 * @a: the number
 * @b: th power
 * Return: int
 */

int pw(int a, unsigned int b)
{
	unsigned int i;
	int c = 1;

	if (b == 0)
	{
		return (1);
	}
	for (i = 0; i < b; i++)
	{
		c = c * a;
	}
		return (c);
}
