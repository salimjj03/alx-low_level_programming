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
	int a, b, mul;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
		return (0);

}
