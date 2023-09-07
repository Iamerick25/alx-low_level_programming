#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc
  * @b: size to alocate
  *
  * Return: Nothing
  */

void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);

	if (j == NULL)
	{
		exit(98);
	}

	return (j);
}
