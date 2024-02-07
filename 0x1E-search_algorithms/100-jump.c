#include "search_algos.h"
#include <math.h>

/**
 * jump_search - ......
 * @array:....
 * @size:.....
 * @value: .....
 *
 * Return: ....
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, s = 0, jump = sqrt(size);

	if (array == NULL)
		return (-1);


	while (array[jump] < value && s < size)
	{
		printf("Value checked array[%ld] = [%d]\n", s, array[s]);
		s = jump;
		jump = jump + sqrt(size);
		if (jump > size - 1)
			jump = size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", s, jump);
	for (i = s; i < jump; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
