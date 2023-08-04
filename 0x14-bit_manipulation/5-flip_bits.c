#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - ...
  * @n: ...
  * @m: ...
  *
  * Return: ...
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = 0, count = 0;

	val = n ^ m;
	while (val)
	{
		if (val & 1)
		{
			count++;
		}
		val = val >> 1;
	}
	return (count);
}
