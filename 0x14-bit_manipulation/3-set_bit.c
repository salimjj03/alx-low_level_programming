#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * set_bit - .....
  * @n: ............
  * @index: .........
  *
  * Return: .....
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit = (*n |= 1 << index) ? 1 : -1;
	return (bit);
}
