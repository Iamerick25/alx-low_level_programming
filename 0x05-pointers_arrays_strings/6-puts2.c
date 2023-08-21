#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The string
 * Return: Void
 */

void puts2(char *str)
{
	int v;
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	for (v = 0; v < a; v += 2)
	{
		_putchar(str[v]);
	}

	_putchar('\n');
}
