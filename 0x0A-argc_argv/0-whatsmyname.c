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
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
