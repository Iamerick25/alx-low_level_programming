#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @size: the number of elements
 * @array: the array
 * @cmp: a pointer to the function
 *
 * Return: If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
