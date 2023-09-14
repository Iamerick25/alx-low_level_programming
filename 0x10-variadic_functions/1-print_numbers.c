#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed
 * @n: the number of integers passed
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int v;

	va_start(list, n);

	for (v = 0; v < n; v++)
	{
		int num = va_arg(list, int);

		printf("%d", num);

		if (separator != NULL && v < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
