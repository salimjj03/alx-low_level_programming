#include "main.h"

/**
 * rot13 - encode a string to rot13
 * @s: the string
 * Return: s
 */

char *rot13(char *s)
{
	int  i, j;
	char c[105] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char n[105] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; c[j] != '\0'; j++)
	{
	if (s[i] == c[j])
	{
		s[i] = n[j];
	}
	}
	}
		return (s);
}
