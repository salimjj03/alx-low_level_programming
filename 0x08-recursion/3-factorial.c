#include "main.h"

/**
 * factorial - find the factorial of a number
 * @n: the num
 * Return: n
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
