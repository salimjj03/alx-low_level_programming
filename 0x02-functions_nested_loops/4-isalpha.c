#include "main.h"


/**
 * _isalpha - check if @c is alphabet
 * @c: charcter to be check
 * Return: 1 if @c is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
