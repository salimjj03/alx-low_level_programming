#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: p
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0, tlen;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1 = len1 + 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2 = len2 + 1;
	}
	tlen = len1 + len2 + 1;
	p = malloc((tlen) * (sizeof(char)));
	if  (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i]  =  s1[i];
	}
	for (i = 0; i < len2 + 1; i++)
	{
		p[len1 + i] = s2[i];
	}
		return (p);
}
