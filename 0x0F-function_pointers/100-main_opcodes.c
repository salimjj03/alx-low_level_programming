#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */

int main(int argc, char *argv[])
{
	op_t obj;
	int val = 0, i = 0;

	if (argc == 2)
	{
		val = atoi(argv[1]);
	if (val < 0)
	{
		printf("Error\n");
		exit(2);
	}
		ud_unit(&obj);
		ud_set_input_buffer(&obj, argv[1], val);
		ud_set_mode(&obj, 64);
		ud_set_syntax(&obj, UD_SYN_INTEL);

	while (ud_disassemble(&obj))
	{
		printf("\t%s\n", ud_insn_hex(&obj));
	}
	}

	return (0);
}
