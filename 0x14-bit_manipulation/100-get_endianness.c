#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness.
 * Return: int
 */

int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *size = (unsigned char *)&n;

	return ((*size == 1) ? 1 : 0);
}
