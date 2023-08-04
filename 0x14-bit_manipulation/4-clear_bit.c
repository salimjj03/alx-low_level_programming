#include "main.h"
#include <stdio.h>

/**
  * clear_bit - Gets the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  *
  * Return: ...
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n = *n & (~(1 << index));
		return (1);
	}
		return (-1);
}
