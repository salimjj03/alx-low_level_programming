#include "main.h"

/**
 * _isdigit - check @c if it's digit
 * @c: character to be check
 * Return: if @c is upper digit 1 else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
