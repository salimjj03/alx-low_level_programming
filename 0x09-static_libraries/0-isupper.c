#include "main.h"

/**
 * _isupper - check @c if it's upper letter
 * @c: character to be check
 * Return: if @c is upper return 1 else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
