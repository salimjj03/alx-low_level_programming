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

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		sum++;
		break;
	}
	}
	if (j == '\0')
	{
		break;
	}
	}
		return (sum);
}
