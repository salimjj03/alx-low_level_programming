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

	if (index < sizeof(unsigned long int) * 8)
	{
	bit = *n &= (~(1 << index));
	return (bit);
	}
	return (-1);
}
