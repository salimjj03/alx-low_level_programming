#include "main.h"

/**
 * _strchr - return part of string
 * @s: the string
 * @c: positin to cut
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
		s = s + i;
		return (s);
	}
	}
		return ('\0');
}
