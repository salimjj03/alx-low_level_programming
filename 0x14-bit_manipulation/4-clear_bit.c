#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * clear_bit - .....
  * @n: ............
  * @index: .........
  *
  * Return: .....
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	bit = *n &= (~(1 << index));
	return (bit);
}
