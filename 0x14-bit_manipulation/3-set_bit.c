#include "main.h"
#include <stdio.h>

/**
  * set_bit - Gets the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  *
  * Return: ...
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
