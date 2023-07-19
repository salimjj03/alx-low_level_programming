#include "function_pointers.h"
#include <stdlib.h>

/**
  * array_iterator -exicute each element of an array
  * @array: the array
  * @size: array size
  * @action:function pointer
  *
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
