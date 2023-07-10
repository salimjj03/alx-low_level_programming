#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: point the string
 * Return: ponter
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len = len + 1;
	}
	p = malloc((len + 1) * (sizeof(char)));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		p[i] = str[i];
	}
		return (p);
}
