#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - convert the params passed to the program to string
  * @ac: the argument count
  * @av: the argument vector
  *
  * Return: ...
  */

char *argstostr(int ac, char **av)
{
	int i, j, l = 0, len = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		len++;
	}
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		p[l] = av[i][j];
		l++;
	}
		p[l] = '\n';
		l++;
	}
		p[l] = '\0';
		return (p);
}

