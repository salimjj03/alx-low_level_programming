#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		l1 = l1 + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		l2 = l2 + 1;
	}
	p = malloc((l1 + n + 1) * (sizeof(char)));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	if (n >= l2)
	{
	for (i = 0; i <= l2; i++)
	{
		p[l1 + i] = s2[i];
	}
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		p[l1 + i] = s2[i];
	}
		p[l1 + i] = '\0';
	}
		return (p);
}
