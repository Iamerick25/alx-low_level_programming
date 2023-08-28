#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: bytes from memory area to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int v = 0;

	while (v < n)
	{
		dest[v] = src[v];
		v++;
	}

	return (dest);
}
