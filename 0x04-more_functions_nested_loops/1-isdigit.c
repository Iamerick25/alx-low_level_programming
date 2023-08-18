#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: Character to be checked
 *
 * Return: 1 if digit or 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
