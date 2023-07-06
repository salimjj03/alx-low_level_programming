#include "main.h"

/**
 * _pow_recursion - find the power of a number
 * @x: the power
 * @y: the number
 * Return: p
 */

int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
		p = x * _pow_recursion(x, y - 1);
		return (p);
}
