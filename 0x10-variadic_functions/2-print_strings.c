#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings
 * @separator: separates strings
 * @n: number of string
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int v;
	va_list list;
	const char *str;

	va_start(list, n);

	for (v = 0; v < n; v++)
	{
		str = va_arg(list, const char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (v < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
