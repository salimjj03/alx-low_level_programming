#include "main.h"

/**
 * swap_int - swap two integers
 * @a: fist int
 * @b: second int
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
