#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: Destination value
 * @src: The source value
 * @n: The copy limit
 *
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, ls;

	i = ls = 0;
	while (src[ls] != '\0')
	{
		ls++;
	}
	if (ls < n)
	{
		while (i < ls)
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
