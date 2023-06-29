#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
	if (s1[i] > s2[i])
	{
		flag = 1;
	}
	else
	{
		flag = -1;
	}
	}
		break;
	}
	if (flag == 1 || flag == -1)
	{
		return (flag);
	}
	else
	{
		return (0);
	}
}
