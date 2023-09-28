#include "main.h"

/**
 * flip_bits - returns the number of bits
 * @n: value
 * @m: value
 *
 * Return: 0 (Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_v = n ^ m;
	unsigned int count = 0;

	while (xor_v)
	{
		count += xor_v & 1;
		xor_v >>= 1;
	}
	return (count);
}
