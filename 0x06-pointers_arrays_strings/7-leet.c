#include "main.h"

/**
 * leet - encode a string
 * @s: the string
 * Return: s
 */

char *leet(char *s)
{
	int  i, j;
	char c[11] = "aAeEoOtTlL", n[11] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; c[j] != '\0'; j++)
	{
	if (s[i] == c[j])
	{
		s[i] = n[j];
	}
	}
	}
		return (s);
}
