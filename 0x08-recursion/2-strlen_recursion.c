#include "main.h"

/**
 * _strlen_recursion - print the length of string
 * @s: the string
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = len + _strlen_recursion(s + 1);
		return (len);
	}
}
