#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *b = (unsigned char *)&n;

	if (*b == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
