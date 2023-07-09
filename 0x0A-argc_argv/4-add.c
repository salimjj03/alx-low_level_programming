#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - print name of the program
 * @argc: count argv
 * @argv: the array
 * Return: argv
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
	if (*argv[i] >= 48 && *argv[i] <= 57)
	{
		sum = sum + atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	}
		printf("%d\n", sum);
		return (0);
}
