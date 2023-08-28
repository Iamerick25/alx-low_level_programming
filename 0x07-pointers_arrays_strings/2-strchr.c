#include "main.h"

/**
 *  _strchr - Find given char in a string
 * @s: string to search
 * @c: char to search for
 *
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return ('\0');
}
