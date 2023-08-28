#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Area pointed to
 * @b: Byte to fill it with
 * @n: Amount to fill it wih
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int v;

	v = 0;

	while (v < n)
	{
		s[v] = b;
		v++;
	}
	return (s);
}
