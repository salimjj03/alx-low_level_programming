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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
