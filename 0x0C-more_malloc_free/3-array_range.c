#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of min and max
 * @min: minimum value
 * @max: maximum value
 * Return: p
 */

int *array_range(int min, int max)
{
	int i, len = 0, *p;

	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		len = len + 1;
	}
	p = malloc(len * (sizeof(int)));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		p[i] = min + i;
	}
		return (p);
}
