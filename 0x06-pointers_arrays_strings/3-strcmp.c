#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, n = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
	if (s1[i] > s2[i])
	{
		n = 2;
	}
	else
	{
		n = 1;
	}
		break;
	}
	}
	if (n == 2)
	{
		return (15);
	}
	else if (n == 1)
	{
		return (-15);
	}
	else
	{
		return (0);
	}
}
