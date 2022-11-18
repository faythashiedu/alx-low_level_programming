#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: array to search integer
 * @size: size of array
 * @cmp: pointer to comparing function
 *
 * Return: index to the first elemeent
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
