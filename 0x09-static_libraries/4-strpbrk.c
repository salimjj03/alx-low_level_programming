#include "main.h"

/**
 * _strpbrk - gets the length of a prefix substring
 * @s: the string
 * @accept: character set
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int j, i;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		s = s + i;
		return (s);
	}
	}
	}
	if (s[i] == '\0')
	{
		s = s + i;
	}
		return (s);
}
