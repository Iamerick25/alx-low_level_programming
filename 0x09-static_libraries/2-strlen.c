#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int v = 0;

	while (*s != '\0')
	{
		v++;
		s++;
	}

	return (v);
}
