#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: character set
 * Return: sum
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i, sum = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
	for (j = 0; s[j] != ','; j++)
	{
	if (accept[i] == s[j])
	{
		sum = sum + 1;
	}
	}
	}
		return (sum);
}
