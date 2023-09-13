#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function
 * @size: size of the array
 * @action: pointer to the function you need to use
 * @array: the array
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
