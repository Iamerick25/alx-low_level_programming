#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 *
 * Return: Always 0 (Succes)
 */

void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
