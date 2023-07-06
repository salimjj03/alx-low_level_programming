#include "main.h"

/**
 * _pow_recursion - find the power of a number
 * @x: the power
 * @y: the number
 * Return: p
 */
int is_prime_number(int n)
{
	int p;

	if (n < 2)
	{
		return (0);
	}
	else if (n == 0)
	{
		return (1);
	}
		p = is_prime_number(n % (n - 1));
		return (p);
}
