#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c, i;

	for (c = 0; c < 9; c++)
	{
		for (i = c + 1; i < 10; i++)
		{
			putchar((c % 10) + '0');
			putchar((i % 10) + '0');

			if (c == 8 && i == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
