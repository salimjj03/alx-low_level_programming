#include "main.h"
#include <stdio.h>

/**
  * get_bit - Gets the value of a bit at a given index
  * @n: The number to find the index
  * @index: The index to find
  *
  * Return: ...
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	while (n != 0)
	{
		if (count == index)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
		n = n / 2;
		count++;
	}
	if (index > count && index < 63)
	{
		return (0);
	}
	return (-1);
}
