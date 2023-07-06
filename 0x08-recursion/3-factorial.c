#include "main.h"

/**
 * factorial - find the factorial of a number
 * @n: the num
 * Return: n
 */

int factorial(int n)
{
	int f;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
		f = (n * factorial(n - 1));
		return (f);
}
