#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  *
  * @size: The size of the array
  * @c: The char to fill in the array
  *
  * Return: pointer to the array, or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *v;

	if (size == 0)
		return (0);

	v = (char *) malloc(size * sizeof(char));

	if (v == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		v[i] = c;
	}

	return (v);
}

