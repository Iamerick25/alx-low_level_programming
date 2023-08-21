#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: String to print
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int v = 0;
	int c;

	while (*s != '\0')
	{
		v++;
		s++;
	}
	s--;

	for (c = v; c > 0; c--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
