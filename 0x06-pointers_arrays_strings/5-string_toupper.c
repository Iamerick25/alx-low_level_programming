#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @p: The string to be modified
 *
 * Return: char p
 */

char *string_toupper(char *p)
{
	int v = 0;

	while (p[v])
	{
		if (p[v] >= 97 && p[v] <= 122)
		{
			p[v] -= 32;
		}

		v++;

	}
	return (p);
}
